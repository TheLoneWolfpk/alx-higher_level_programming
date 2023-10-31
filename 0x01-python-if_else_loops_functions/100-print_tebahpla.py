#!/usr/bin/python3
p = 0
for g in range(ord('z'), ord('a') - 1, -1):
    print('{}'.format(chr(g - p)), end='')
    p = 32 if p == 0 else 0
