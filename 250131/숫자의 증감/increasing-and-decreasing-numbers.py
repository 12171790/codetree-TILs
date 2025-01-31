arr = input().split()
ch = arr[0]
n = int(arr[1])

if ch == 'A':
    for i in range(1, n + 1):
        print(i, end = ' ')
else:
    for i in range(n, 0, -1):
        print(i, end = ' ')