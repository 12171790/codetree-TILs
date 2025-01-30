b, a = map(int, input().split())

b = b - 1 if b % 2 == 0 else b

for i in range(b, a - 1, -2):
    print(i, end = ' ')