n = int(input())
arr = list(map(int, input().split()))

minVal = arr[0]

for el in arr[1:]:
    if el < minVal:
        minVal = el

print(minVal, arr.count(minVal))