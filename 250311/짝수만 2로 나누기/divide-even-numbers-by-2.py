def mod_even(arr):
    for i in range(len(arr)):
        if arr[i] % 2 == 0:
            arr[i] = arr[i] // 2

n = int(input())
arr = list(map(int, input().split()))
mod_even(arr)

for el in arr:
    print(el, end=" ")

