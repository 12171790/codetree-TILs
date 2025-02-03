n = int(input())
minScore = 60
cnt = 0;

for _ in range(n):
    arr = list(map(float, input().split()))
    avg = sum(arr) / len(arr)

    if avg >= minScore:
        print("pass")
        cnt += 1
    else:
        print("fail")

print(cnt)