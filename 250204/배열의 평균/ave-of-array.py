arr_2d = [
    list(map(int, input().split()))
    for _ in range(2)
]

for i in range(len(arr_2d)):
    print(f"{sum(arr_2d[i]) / len(arr_2d[i]):.1f}", end=' ')
print()

for i in range(len(arr_2d[0])):
    sum = 0
    for j in range(len(arr_2d)):
        sum += arr_2d[j][i]
    print(f"{sum / len(arr_2d):.1f}", end=' ')
print()

totalSum = 0;
totalCnt = 0;
del sum
for i in range(len(arr_2d)):
    totalSum += sum(arr_2d[i])
    totalCnt += len(arr_2d[i])

print(f"{totalSum / totalCnt:.1f}")