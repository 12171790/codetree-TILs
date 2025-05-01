n = int(input())
arr = [input() for _ in range(n)]

k = int(input())

def in_range(x, y):
    return x >= 0 and x < n and y >= 0 and y < n

# 빛 진행 방향  남 서 북 동
Ldxs, Ldys = [0, 1, 0, -1], [-1, 0, 1, 0]
# 빛 진행 방향  남 서 북 동
Rdxs, Rdys = [0, -1, 0, 1], [1, 0, -1, 0]
dir_num = k // n

if dir_num == 0:
    x, y = 0, k - 1
elif dir_num == 1:
    x, y = k - n - 1, n - 1
elif dir_num == 2:
    x, y = n - 1, 3 * n - k
elif dir_num == 3:
    x, y = 4 * n - k, 0

count = 0
while(in_range(x, y)):
    if arr[x][y] == '/':
        x, y = x + Ldxs[dir_num], y + Ldys[dir_num]
        dir_num = dir_num - 1 if dir_num % 2 == 1 else dir_num + 1
    elif arr[x][y] == '\\':
        x, y = x + Rdxs[dir_num], y + Rdys[dir_num]
        dir_num = 3 - dir_num
    count += 1
print(count)
