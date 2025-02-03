n = int(input())
alp = 'A'

for i in range(n):
    for _ in range(i + 1):
        print(alp, end = '')
        alp = chr(ord(alp) + 1)

        if alp > 'Z':
            alp = 'A'

    print()