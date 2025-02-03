arr = [0 for _ in range(10)]
n = int(input())
arr2 = list(map(int, input().split()))

for el in arr2:
    arr[el] += 1

for i in range(1, len(arr)):
    print(arr[i])