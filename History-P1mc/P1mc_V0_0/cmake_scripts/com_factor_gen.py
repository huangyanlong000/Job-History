import cantools

db = cantools.database.load_file('TENINONE_HCAN2_v1.9_20250625.dbc')
signals = []

for msg in db.messages:
    for signal in msg.signals:
        signals.append({
            'name': signal.name,
            'factor': signal.scale,
            'offset': signal.offset,
            'min_phys': signal.minimum,
            'max_phys': signal.maximum
        })

# 生成C代码
with open('signals.c', 'w') as f:
    f.write('#include "signals.h"\n\n')
    f.write('SignalDescriptor signal_table[] = {\n')
    for sig in signals:
        f.write(f'    {{"{sig["name"]}", {sig["factor"]}, {sig["offset"]}, {sig["min_phys"]}, {sig["max_phys"]}}},\n')
    f.write('};\n')