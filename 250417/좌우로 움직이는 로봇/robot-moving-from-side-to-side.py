n, m = map(int, input().split())

arr_A = [0]
arr_B = [0]
pos = 0

for i in range(n):
    t, d = input().split()
    t = int(t)
    
    for _ in range(t):
        pos = pos + (1 if d == 'R' else -1)
        arr_A.append(pos)

pos = 0

for i in range(m):
    t, d = input().split()
    t = int(t)

    for _ in range(t):
        pos = pos + (1 if d == 'R' else -1)
        arr_B.append(pos)

A_len = len(arr_A)
B_len = len(arr_B)

if A_len > B_len:
    for _ in range(B_len, A_len):
        arr_B.append(arr_B[B_len - 1])
elif B_len > A_len:
    for _ in range(A_len, B_len):
        arr_A.append(arr_A[A_len - 1])

count = 0

for i in range(2, max(A_len, B_len)):
    if arr_A[i - 1] != arr_B[i - 1] and arr_A[i] == arr_B[i]:
        count += 1

print(count)    
