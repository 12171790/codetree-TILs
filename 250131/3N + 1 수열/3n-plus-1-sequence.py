N = int(input())
cnt = 0

while True:
    if N == 1:
        break
    cnt += 1

    if N % 2 == 0:
        N //= 2
    else:
        N = N * 3 + 1
print(cnt)