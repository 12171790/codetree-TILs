n, m = map(int, input().split())
cnt = 1
arr_2d = []
for _ in range(n):
    arr_temp = []
    for _ in range(m):
        arr_temp.append(cnt)
        cnt += 1
    arr_2d.append(arr_temp)

for row in arr_2d:
    for el in row:
        print(el, end=' ')
    print()