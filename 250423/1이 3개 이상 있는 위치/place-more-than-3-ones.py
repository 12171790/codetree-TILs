n = int(input())
grid = [list(map(int, input().split())) for _ in range(n)]
#동남서북
dxs, dys = [0, 1, 0, -1], [1, 0, -1, 0]

def in_range(x, y):
    return x >= 0 and x < n and y >= 0 and y < n

answer = 0

for i in range(n):
    for j in range(n):
        count = 0
        for dx, dy in zip(dxs, dys):
            nx, ny = i + dx, j + dy
            if in_range(nx, ny) and grid[nx][ny] == 1:
                count += 1
        if count >= 3:
            answer += 1
            
print(answer)
