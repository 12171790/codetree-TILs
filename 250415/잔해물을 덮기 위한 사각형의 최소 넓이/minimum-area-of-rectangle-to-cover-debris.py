arr = [[0 for _ in range(2001)] for _ in range(2001)]

for k in range(2):
    x1, y1, x2, y2 = map(lambda x: x + 1000, map(int, input().split()))

    for i in range(x1, x2):
        for j in range(y1, y2):
            arr[i][j] = k + 1

x1, x2, y1, y2 = (2000, 0, 2000, 0)

for i in range(len(arr)):
    for j in range(len(arr[0])):
        if arr[i][j] == 1:
            if i < x1:
                x1 = i
            if i > x2:
                x2 = i
            if j < y1:
                y1 = j
            if j > y2:
                y2 = j

for i in range(x1, x2 + 1):
    for j in range(y1, y2 + 1):
        arr[i][j] = 3

count = 0

for i in range(len(arr)):
    for j in range(len(arr[0])):
        if arr[i][j] == 3:
            count += 1

print(count)


    