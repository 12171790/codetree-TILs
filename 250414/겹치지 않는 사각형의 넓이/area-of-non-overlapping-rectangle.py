arr = [[0 for _ in range(2001)] for _ in range(2001)]

for k in range(3):
    x1, y1, x2, y2 = map(int, input().split())

    for i in range(x1, x2):
        for j in range(y1, y2):
            arr[i][j] = k + 1

count = 0
for i in range(len(arr)):
    for j in range(len(arr[0])):
        if arr[i][j] == 1 or arr[i][j] == 2:
            count += 1

print(count)