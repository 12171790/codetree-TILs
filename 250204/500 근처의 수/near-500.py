import sys

arr = list(map(int, input().split()))
min = sys.maxsize
minIdx = 0
max = -sys.maxsize
maxIdx = 0

for i in range(len(arr)):
    temp = arr[i] - 500

    if temp > 0:
        if temp < min:
            min = temp
            minIdx = i
    elif temp < 0:
        if temp > max:
            max = temp
            maxIdx = i

print(arr[maxIdx], arr[minIdx])
