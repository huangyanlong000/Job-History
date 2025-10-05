import re
import cantools
from pathlib import Path
from collections import defaultdict

def parse_com_cfg_h(file_path):
    """
    解析Com_Cfg.h文件，提取三类宏定义
    :return: {
        "signal_macros": {信号名: 宏名},       # 独立信号
        "group_signal_macros": {信号名: 宏名},  # 组内信号
        "group_macros": {组名: 宏名}           # 信号组
    }
    """
    result = {
        "signal_macros": {},
        "group_signal_macros": {},
        "group_macros": {}
    }
    
    # 定义三种宏的正则表达式
    patterns = {
        "signal": re.compile(r'#define\s+(ComConf_ComSignal_(\w+?)_[0-9a-f]+)\s+'),
        "group_signal": re.compile(r'#define\s+(ComConf_ComGroupSignal_(\w+?)_[0-9a-f]+)\s+'),
        "group": re.compile(r'#define\s+(ComConf_ComSignalGroup_SG_(\w+?)_[0-9a-f]+)\s+')
    }
    
    try:
        with open(file_path, 'r') as f:
            for line in f:
                line = line.strip()
                if not line or line.startswith(('/*', '//')):
                    continue
                
                # 尝试匹配每种宏类型
                for key, pattern in patterns.items():
                    match = pattern.match(line)
                    if match:
                        full_macro = match.group(1)
                        name = match.group(2)
                        result[f"{key}_macros"][name] = full_macro
                        break
                        
    except FileNotFoundError:
        raise RuntimeError(f"Com_Cfg.h文件不存在: {file_path}")
    except Exception as e:
        raise RuntimeError(f"解析错误: {str(e)}")
    
    return result

def load_multiple_dbc(file_paths):
    """合并多个DBC文件并处理ID冲突"""
    merged_db = cantools.db.Database()
    for path in file_paths:
        db = cantools.database.load_file(path)
        for msg in db.messages:
            if any(m.frame_id == msg.frame_id for m in merged_db.messages):
                msg.name += f"_{Path(path).stem}"
            merged_db.messages.append(msg)
    return merged_db

def generate_c_code(dbc_paths, com_cfg_path):
    """生成Com层C代码"""
    # 1. 加载并合并DBC
    db = load_multiple_dbc(dbc_paths)
    
    # 2. 解析Com_Cfg.h
    com_config = parse_com_cfg_h(com_cfg_path)
    sig_macros = com_config["signal_macros"]
    group_sig_macros = com_config["group_signal_macros"]
    group_macros = com_config["group_macros"]
    
    # 3. 组织信号结构
    group_signals_map = defaultdict(list)
    standalone_signals = []
    
    for message in db.messages:
        # 生成变量名 (MessageName_0xID_ID)
        var_suffix = f"{message.frame_id:X}"
        var_name = f"{message.name}_0x{var_suffix}_{var_suffix}"
        
        for signal in message.signals:
            in_group = False
            # 检查信号是否属于某个组
            for group in message.signal_groups:
                if signal.name in group.signal_names:
                    group_signals_map[group.name].append((var_name, signal))
                    in_group = True
                    break
                    
            if not in_group:
                standalone_signals.append((var_name, signal))
    
    # 4. 生成C代码
    c_code_lines = []
    
    # 处理组信号
    for group_name, signals in group_signals_map.items():
        group_macro = group_macros.get(group_name)
        if not group_macro:
            continue
            
        c_code_lines.append(f"Com_ReceiveSignalGroup({group_macro});")
        
        for var_name, signal in signals:
            signal_macro = group_sig_macros.get(signal.name)
            if signal_macro:
                c_code_lines.append(f"  Com_ReceiveSignal({signal_macro}, &VsCOMM_huawei_Veh_RX_DATA.{var_name}.{signal.name});")
    
    # 处理独立信号
    for var_name, signal in standalone_signals:
        signal_macro = sig_macros.get(signal.name)
        if signal_macro:
            c_code_lines.append(f"Com_ReceiveSignal({signal_macro}, &VsCOMM_huawei_Veh_RX_DATA.{var_name}.{signal.name});")
    
    return "\n".join(c_code_lines)

# 主执行流程
if __name__ == "__main__":
    dbc_files = ["TENINONE_HCAN1_v1.10_20250708.dbc", "TENINONE_HCAN2_v1.9_20250625.dbc"]
    com_cfg = "Appl/GenData/Com_Cfg.h"
    
    output_code = generate_c_code(dbc_files, com_cfg)
    print("Generated COM Layer Code:\n")
    print(output_code)
