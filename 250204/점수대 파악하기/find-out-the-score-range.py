arr = list(map(int, input().split()))
scoreArr = [0 for _ in range(11)]

for el in arr:
    scoreArr[el // 10] += 1

for i in range(len(scoreArr) - 1, 0, -1):
    print(f"{i * 10} - {scoreArr[i]}")
