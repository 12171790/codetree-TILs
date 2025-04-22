x, y = 0, 0
# 북동남서
dx, dy = [0, 1, 0, -1], [1, 0, -1, 0]

direction_str = input()
dir_num = 0

for el in direction_str:
    if el == 'L':
        dir_num = (dir_num + 3) % 4
    elif el == 'R':
        dir_num = (dir_num + 1) % 4
    elif el == 'F':
        x, y = x + dx[dir_num], y + dy[dir_num]

print(x, y)