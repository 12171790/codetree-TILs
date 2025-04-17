n, m = map(int, input().split())

pos = 0
arr_A = [0]
arr_B = [0]

for i in range(n):
    d, t = input().split()
    t = int(t)

    if d == 'R':
        for j in range(t):
            pos += 1
            arr_A.append(pos)
    elif d == 'L':
        for j in range(t):
            pos -= 1
            arr_A.append(pos)

pos = 0

for i in range(m):
    d, t = input().split()
    t = int(t)

    if d == 'R':
        for j in range(t):
            pos += 1
            arr_B.append(pos)
    elif d == 'L':
        for j in range(t):
            pos -= 1
            arr_B.append(pos)

answer = -1
for i in range(1, min(len(arr_A), len(arr_B))):
    if arr_A[i] == arr_B[i]:
        answer = i
        break

print(answer)