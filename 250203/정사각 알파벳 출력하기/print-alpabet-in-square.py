n = int(input())
alp = 'A'

for _ in range(n):
    for _ in range(n):
        print(alp, end = '')
        alp = chr(ord(alp) + 1)
    print()