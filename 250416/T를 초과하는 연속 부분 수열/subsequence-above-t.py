n, t = map(int, input().split())
arr = list(map(int, input().split()))

count = 0
max_count = 0

for i in range(len(arr)):
    if arr[i] > t:
        count += 1
    else:
        max_count = max(max_count, count)
        count = 0

max_count = max(max_count, count)
print(max_count)