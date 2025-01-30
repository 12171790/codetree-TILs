a, b = map(int, input().split())
a = a + 1 if a % 2 == 0 else a

for i in range(a, b + 1, 2):
    print(i, end = ' ')