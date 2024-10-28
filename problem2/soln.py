a = 1
b = 1
s = 0
while True:
    nxt = a + b
    if nxt >= 4000000:
        brea
    if nxt % 2 == 0:
        s += nxt
    a = b
    b = nxt
print(s)


