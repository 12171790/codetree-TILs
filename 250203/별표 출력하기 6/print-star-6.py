n = int(input())

for i in range(n):
    for _ in range(i * 2):
        print(' ', end = '')

    for _ in range(((n - i) * 2) - 1, 0, -1):
        print('*', end = ' ')
    print()

for i in range(n - 2, -1, -1):
    for _ in range(i * 2):
        print(' ', end = '')

    for _ in range(((n - i) * 2) - 1, 0, -1):
        print('*', end = ' ')
    print()
