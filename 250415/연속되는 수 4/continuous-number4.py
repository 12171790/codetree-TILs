n = int(input())
arr = []

for _ in range(n):
    arr.append(int(input()))

count = 1
max_count = 0

for i in range(1, len(arr)):
    if arr[i] > arr[i - 1]:
        count += 1
    else:
        max_count = max(max_count, count)
        count = 1

max_count = max(max_count, count)

print(max_count)