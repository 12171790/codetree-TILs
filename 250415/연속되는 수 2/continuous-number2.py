n = int(input())
arr = []

for _ in range(n):
    arr.append(int(input()))

count = 1
max_count = 0

for i in range(n):
    if i == 0 or arr[i] != arr[i - 1]:
        max_count = max(max_count, count)
        count = 1
    else:
        count += 1

print(max_count)

