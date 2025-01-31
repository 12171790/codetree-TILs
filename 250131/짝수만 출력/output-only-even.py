a, b = map(int, input().split())

a = a + 1 if a % 2 == 1 else a

while a <= b:
    print(a, end = ' ')
    a += 2