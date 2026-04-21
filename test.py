# 直接从 IDA 伪代码的三个 QWORD 还原目标字节流（小端序）
buf2 = 0x17091D121716051E
var68_0 = 0x1A363A1601171313
var68_1 = 0x7D04031B043A2C1A

# 按小端序拆成字节
b1 = int.to_bytes(buf2, 8, 'little')
b2 = int.to_bytes(var68_0, 8, 'little')
b3 = int.to_bytes(var68_1, 8, 'little')

# 拼接成 24 字节，取前 23 字节作为目标 R
R = list(b1 + b2 + b3)[:23]

# 逆运算还原 flag
F = [0] * 23
F[22] = R[22]
for i in range(21, -1, -1):
    F[i] = R[i] ^ F[i+1]

# 转成字符串
flag = ''.join(chr(x) for x in F)
print("✅ 最终 Flag:", flag)