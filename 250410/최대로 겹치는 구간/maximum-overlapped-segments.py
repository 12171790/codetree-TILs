n = int(input())
arr = [0 for _ in range(201)]

for _ in range(n):
    a, b = map(int, input().split())
    a += 100
    b += 100

    for i in range(a, b):
        arr[i] += 1


print(max(arr))
