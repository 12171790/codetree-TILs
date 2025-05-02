n, m = map(int, input().split())

# 남 동 북 서
dx, dy = [1, 0, -1, 0], [0, 1, 0, -1]
arr = [[0 for _ in range(m)] for _ in range(n)]

def in_range(x, y):
    return x >= 0 and x < n and y >= 0 and y < m

x, y = 0, 0
count = 1
arr[x][y] = count
dir_num = 0

for _ in range(n * m - 1):
    nx, ny = x + dx[dir_num], y + dy[dir_num]
    count += 1
    if not in_range(nx, ny) or arr[nx][ny] != 0:
        dir_num = (dir_num + 1) % 4
    x, y = x + dx[dir_num], y + dy[dir_num]
    arr[x][y] = count
for i in range(len(arr)):
    for j in range(len(arr[i])):
        print(arr[i][j], end = ' ')
    print()