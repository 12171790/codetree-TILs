n, m = map(int, input().split())

dxs, dys = [0, 1, 0, -1], [1, 0, -1, 0]
x, y = 0, 0
arr = [[0 for _ in range(m)] for _ in range(n)]

def in_range(x, y):
    return x >= 0 and x < n and y >= 0 and y < m

arr[x][y] = 1
dir_num = 0
for i in range(2, n * m + 1):
    nx, ny = x + dxs[dir_num], y + dys[dir_num]

    if not in_range(nx, ny) or arr[nx][ny] != 0:
        dir_num = (dir_num + 1) % 4
        nx, ny = x + dxs[dir_num], y + dys[dir_num]

    arr[nx][ny] = i
    x, y = nx, ny


for i in range(n):
    for j in range(m):
        print(arr[i][j], end=' ')
    print()
    