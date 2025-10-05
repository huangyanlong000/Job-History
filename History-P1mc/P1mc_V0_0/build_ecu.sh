# #!/bin/bash

# #输出内容格式设置
# {

#     # 设置颜色输出
#     BLACK='\033[0;30m'   # 黑色
#     RED='\033[0;31m'     # 红色
#     GREEN='\033[0;32m'   # 绿色
#     YELLOW='\033[0;33m'  # 黄色
#     BLUE='\033[0;34m'    # 蓝色
#     PURPLE='\033[0;35m'  # 紫色
#     CYAN='\033[0;36m'    # 青色
#     WHITE='\033[0;37m'   # 白色

#     #亮色（加粗）
#     BLACK_B='\033[1;30m'  # 亮黑色
#     RED_B='\033[1;31m'    # 亮红色
#     GREEN_B='\033[1;32m'  # 亮绿色
#     YELLOW_B='\033[1;33m' # 亮黄色
#     BLUE_B='\033[1;34m'   # 亮蓝色
#     PURPLE_B='\033[1;35m' # 亮紫色
#     CYAN_B='\033[1;36m'   # 亮青色
#     WHITE_B='\033[1;37m'  # 亮白色

#     #背景色
#     BLACK_BG='\033[40m'   # 黑色背景
#     RED_BG='\033[41m'     # 红色背景
#     GREEN_BG='\033[42m'   # 绿色背景
#     YELLOW_BG='\033[43m'  # 黄色背景
#     BLUE_BG='\033[44m'    # 蓝色背景
#     PURPLE_BG='\033[45m'  # 紫色背景
#     CYAN_BG='\033[46m'    # 青色背景
#     WHITE_BG='\033[47m'   # 白色背景

#     #文字样式
#     BOLD='\033[1m'        # 粗体
#     DIM='\033[2m'         # 暗淡
#     ITALIC='\033[3m'      # 斜体
#     UNDERLINE='\033[4m'   # 下划线
#     BLINK='\033[5m'       # 闪烁
#     REVERSE='\033[7m'     # 反色（前景背景互换）
#     HIDDEN='\033[8m'      # 隐藏

# }

# #title
# {
#     echo -e "${YELLOW}/******************************开始构建ADAS项目编译******************************/${NC}"
#     echo -e "${RED}脚本名称: $0${NC}"
#     echo -e "${GREEN}参数总数: $#${NC}"
#     echo -e "${PURPLE_B}所有参数列表:"

#     for arg in "$@"; do

#         echo "参数$((++i)): $arg"

#     done

#     echo -e "${YELLOW}/*******************************运行CMake配置************************************/${NC}"

#     mkdir BUILD && cd BUILD

#     cmake .. -DPMIC_WINDOW_WDG_ON=OFF -DPRE_SCRIPT=ON -DHW_VERSION=V0 -DBUILD_TYPE=Debug 

#     make -j32 
    
#     ../../../../tools/ghs-rh850/comp_202314/gsrec -b -e 0 -hex386 ./bin/rh850_p1xc.elf -o ./bin/rh850_p1xc.hex

# }


#!/bin/bash

#输出内容格式设置
{
    # 设置颜色输出
    BLACK='\033[0;30m'   # 黑色
    RED='\033[0;31m'     # 红色
    GREEN='\033[0;32m'   # 绿色
    YELLOW='\033[0;33m'  # 黄色
    BLUE='\033[0;34m'    # 蓝色
    PURPLE='\033[0;35m'  # 紫色
    CYAN='\033[0;36m'    # 青色
    WHITE='\033[0;37m'   # 白色
    NC='\033[0m'         # 重置颜色

    #亮色（加粗）
    BLACK_B='\033[1;30m'  # 亮黑色
    RED_B='\033[1;31m'    # 亮红色
    GREEN_B='\033[1;32m'  # 亮绿色
    YELLOW_B='\033[1;33m' # 亮黄色
    BLUE_B='\033[1;34m'   # 亮蓝色
    PURPLE_B='\033[1;35m' # 亮紫色
    CYAN_B='\033[1;36m'   # 亮青色
    WHITE_B='\033[1;37m'  # 亮白色

    #背景色
    BLACK_BG='\033[40m'   # 黑色背景
    RED_BG='\033[41m'     # 红色背景
    GREEN_BG='\033[42m'   # 绿色背景
    YELLOW_BG='\033[43m'  # 黄色背景
    BLUE_BG='\033[44m'    # 蓝色背景
    PURPLE_BG='\033[45m'  # 紫色背景
    CYAN_BG='\033[46m'    # 青色背景
    WHITE_BG='\033[47m'   # 白色背景

    #文字样式
    BOLD='\033[1m'        # 粗体
    DIM='\033[2m'         # 暗淡
    ITALIC='\033[3m'      # 斜体
    UNDERLINE='\033[4m'   # 下划线
    BLINK='\033[5m'       # 闪烁
    REVERSE='\033[7m'     # 反色（前景背景互换）
    HIDDEN='\033[8m'      # 隐藏
}

# 自定义make函数，用于显示编译进度
custom_make() {
    local make_command="$1"
    local output_file=$(mktemp)
    local current_file=""
    local file_errors=()
    
    echo -e "${YELLOW}/*******************************开始编译****************************************/${NC}"
    
    # 执行make并捕获输出
    eval "$make_command" 2>&1 | tee "$output_file" | while read -r line; do
        # 检测编译开始行（GCC/Green Hills编译器格式）
        if [[ "$line" =~ Building\ .*\.(c|cpp|C|s|S|asm) ]] || 
           [[ "$line" =~ \[\s*[0-9]+%\].*\]\ (.+\.(c|cpp|C|s|S|asm)) ]] ||
           [[ "$line" =~ Compiling.*\.(c|cpp|C|s|S|asm) ]]; then
            
            # 提取文件名
            if [[ "$line" =~ Building\ (.+\.(c|cpp|C|s|S|asm)) ]]; then
                current_file="${BASH_REMATCH[1]}"
            elif [[ "$line" =~ \[\s*[0-9]+%\].*\]\ (.+\.(c|cpp|C|s|S|asm)) ]]; then
                current_file="${BASH_REMATCH[1]}"
            elif [[ "$line" =~ Compiling\ (.+\.(c|cpp|C|s|S|asm)) ]]; then
                current_file="${BASH_REMATCH[1]}"
            fi
            
            if [ -n "$current_file" ]; then
                echo -e "${CYAN_B}🔨 正在编译: ${BLUE_B}$current_file${NC}"
            fi
        fi
        
        # 显示进度信息但不重复显示文件名
        echo "$line" | grep -E "\[\s*[0-9]+%\]|Linking|Building" | grep -vE "\.(c|cpp|C|s|S|asm)"
    done
    
    # 检查编译结果
    local exit_code=${PIPESTATUS[0]}
    
    # 分析错误文件
    if [ $exit_code -ne 0 ]; then
        # 从输出中提取错误信息
        while read -r line; do
            if [[ "$line" =~ error|Error.*[0-9] ]] && [[ "$line" =~ \".*\.(c|cpp|C|s|S|asm)\" ]]; then
                # 提取包含错误的文件名
                if [[ "$line" =~ \"([^\"]+\.(c|cpp|C|s|S|asm))\" ]]; then
                    local error_file="${BASH_REMATCH[1]}"
                    if [[ ! " ${file_errors[@]} " =~ " ${error_file} " ]]; then
                        file_errors+=("$error_file")
                        echo -e "${RED_B}❌ 编译失败: ${RED}$error_file${NC}"
                    fi
                fi
            fi
        done < "$output_file"
    fi
    
    # 清理临时文件
    rm -f "$output_file"
    
    return $exit_code
}

# 错误分析和定位函数
analyze_error() {
    local error_output="$1"
    
    echo -e "${RED_B}╔══════════════════════════════════════════════════════════════╗${NC}"
    echo -e "${RED_B}║                     编译错误分析报告                         ║${NC}"
    echo -e "${RED_B}╚══════════════════════════════════════════════════════════════╝${NC}"
    
    # 提取致命错误信息 - 红色显示
    local fatal_errors=$(echo "$error_output" | grep -E "fatal error|Error [0-9]|error #")
    if [ -n "$fatal_errors" ]; then
        echo -e "${RED_B}❌ 致命错误:${NC}"
        echo "$fatal_errors" | while read -r error; do
            echo -e "   ${RED}➜ $error${NC}"
            
            # 提取文件路径和行号信息（针对错误）
            if echo "$error" | grep -q '".*", line [0-9]'; then
                local file_path=$(echo "$error" | grep -o '".*"' | tr -d '"')
                local line_number=$(echo "$error" | grep -o 'line [0-9]\+' | grep -o '[0-9]\+')
                
                if [ -n "$file_path" ] && [ -n "$line_number" ]; then
                    echo -e "   ${YELLOW}📄 文件: $file_path${NC}"
                    echo -e "   ${RED}📍 行号: $line_number${NC}"
                    
                    # 显示错误行内容（如果文件存在）
                    if [ -f "$file_path" ]; then
                        local error_line=$(sed -n "${line_number}p" "$file_path")
                        echo -e "   ${CYAN}📝 代码: $error_line${NC}"
                    fi
                    
                    echo -e "   ${BLUE}────────────────────────────────────────────────────────────${NC}"
                fi
            fi
        done
        echo ""
    fi

    # 提取警告信息 - 蓝色显示
    local warnings=$(echo "$error_output" | grep -i "warning" | grep -v "fatal error")
    if [ -n "$warnings" ]; then
        echo -e "${BLUE_B}⚠️  警告信息:${NC}"
        echo "$warnings" | head -10 | while read -r warning; do
            echo -e "   ${BLUE}➜ $warning${NC}"
            
            # 提取文件路径和行号信息（针对警告）
            if echo "$warning" | grep -q '".*", line [0-9]'; then
                local file_path=$(echo "$warning" | grep -o '".*"' | tr -d '"')
                local line_number=$(echo "$warning" | grep -o 'line [0-9]\+' | grep -o '[0-9]\+')
                
                if [ -n "$file_path" ] && [ -n "$line_number" ]; then
                    echo -e "   ${YELLOW}📄 文件: $file_path${NC}"
                    echo -e "   ${BLUE}📍 行号: $line_number${NC}"
                    
                    # 显示警告行内容（如果文件存在）
                    if [ -f "$file_path" ]; then
                        local warning_line=$(sed -n "${line_number}p" "$file_path")
                        echo -e "   ${CYAN}📝 代码: $warning_line${NC}"
                    fi
                    
                    echo -e "   ${BLUE}────────────────────────────────────────────────────────────${NC}"
                fi
            fi
        done
        
        local warning_count=$(echo "$warnings" | wc -l)
        if [ $warning_count -gt 10 ]; then
            echo -e "   ${BLUE}➜ ... 还有 $((warning_count - 10)) 条警告信息${NC}"
        fi
        echo ""
    fi

    # 提取编译器选项问题 - 黄色显示
    local option_errors=$(echo "$error_output" | grep -i "unknown option\|ignored with these options")
    if [ -n "$option_errors" ]; then
        echo -e "${YELLOW_B}⚙️  编译器选项问题:${NC}"
        echo "$option_errors" | while read -r option_error; do
            echo -e "   ${YELLOW}➜ $option_error${NC}"
        done
        echo ""
    fi

    # 提供解决方案建议 - 绿色显示
    echo -e "${GREEN_B}💡 建议解决方案:${NC}"
    
    # 检查是否是头文件缺失错误
    if echo "$error_output" | grep -q "cannot open source file"; then
        local missing_file=$(echo "$error_output" | grep -o 'cannot open source file "[^"]*"' | cut -d'"' -f2)
        echo -e "   ${GREEN}✅ 缺少头文件: $missing_file${NC}"
        echo -e "   ${GREEN}   ➜ 请检查文件是否存在: find ~/my_p/ecus/ -name \"$missing_file\"${NC}"
        echo -e "   ${GREEN}   ➜ 如果存在，请在 CMakeLists.txt 中添加包含路径${NC}"
    fi

    # 检查编译器选项问题
    if echo "$error_output" | grep -q "Unknown option"; then
        echo -e "   ${GREEN}✅ 编译器选项问题${NC}"
        echo -e "   ${GREEN}   ➜ 检查 CMakeLists.txt 中的编译器标志设置${NC}"
        echo -e "   ${GREEN}   ➜ 确保正确配置了 Green Hills 编译器${NC}"
    fi

    # 检查makefile错误
    if echo "$error_output" | grep -q "Makefile\|make"; then
        echo -e "   ${GREEN}✅ Makefile构建问题${NC}"
        echo -e "   ${GREEN}   ➜ 检查构建目录是否干净，尝试 rm -rf BUILD/ && 重新构建${NC}"
    fi
}

#开始构建编译
{
    echo -e "${YELLOW}/******************************开始构建ADAS项目编译******************************/${NC}"
    echo -e "${RED}脚本名称: $0${NC}"
    echo -e "${GREEN}参数总数: $#${NC}"
    echo -e "${PURPLE_B}所有参数列表:${NC}"

    i=0
    for arg in "$@"; do
        echo "参数$((++i)): $arg"
    done
}

#执行Cmake的配置工作
{
    echo -e "${YELLOW}/*******************************运行CMake配置************************************/${NC}"

    # 清理旧构建
    if [ -d "BUILD" ]; then
        rm -rf BUILD/
    fi

    mkdir BUILD && cd BUILD

    # 执行CMake配置并捕获输出
    cmake_output=$(cmake .. -DPMIC_WINDOW_WDG_ON=OFF -DPRE_SCRIPT=ON -DHW_VERSION=V0 -DBUILD_TYPE=Debug 2>&1)
    cmake_exit_code=$?
    
    echo "$cmake_output"
}

# 检查cmake配置结果
{
    if [ $cmake_exit_code -ne 0 ]; then
        echo -e "${RED_B}CMake配置失败！${NC}"
        analyze_error "$cmake_output"
        exit 1
    fi
}

#开始编译
{
    # 使用自定义make函数进行编译
    custom_make "make -j32"
    make_exit_code=$?
}

#检查编译的结果
{
    if [ $make_exit_code -eq 0 ]; then
        echo -e "${GREEN_B}编译成功！${NC}"
        
        # 执行hex文件生成
        hex_output=$(../../../tools/ghs-rh850/comp_202314/gsrec -b -e 0 -hex386 ./bin/rh850_p1xc.elf -o ./bin/rh850_p1xc.hex 2>&1)
        hex_exit_code=$?
        
        if [ $hex_exit_code -eq 0 ]; then
            echo -e "${GREEN_B}Hex文件生成成功!${NC}"
            echo -e "${GREEN}编译完成时间: $(date)${NC}"
        else
            echo -e "${RED_B}Hex文件生成失败!${NC}"
            echo "$hex_output"
            exit 1
        fi

    else
        echo -e "${RED_B}编译失败！${NC}"
        # 调用错误分析函数
        analyze_error "$(make -j32 2>&1)"
        exit 1
    fi
}

# 添加编译结果总结
{
    echo -e "${YELLOW}/*******************************编译结果总结************************************/${NC}"
    echo -e "${GREEN_B}✅ ADAS项目编译完成！${NC}"
    echo -e "${BLUE}编译目录: $(pwd)${NC}"
    echo -e "${BLUE}生成文件: ./bin/rh850_p1xc.elf 和 ./bin/rh850_p1xc.hex${NC}"
    echo -e "${GREEN}所有构建步骤均已成功完成！${NC}"
    echo -e "${YELLOW}/******************************************************************************/${NC}"
}

