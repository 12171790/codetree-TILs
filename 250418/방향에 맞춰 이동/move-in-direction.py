pos = [0, 0]
#동 남 서 북
dx = [1, 0, -1, 0]
dy = [0, -1, 0, 1]

n = int(input())

for _ in range(n):
    d, t = input().split()
    t = int(t)
    if d == 'E':
        d = 0
    elif d == 'S':
        d = 1
    elif d == 'W':
        d = 2
    elif d == 'N':
        d = 3

    pos[0], pos[1] = pos[0] + dx[d] * t, pos[1] + dy[d] * t
 
print(pos[0], pos[1])