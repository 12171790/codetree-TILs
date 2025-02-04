n, q = map(int, input().split())
arr = list(map(int, input().split()))

for _ in range(q):
    temp = list(map(int, input().split()))

    if temp[0] == 1:
        print(arr[temp[1] - 1])
    elif temp[0] == 2:
        if temp[1] in arr:
            print(arr.index(temp[1]) + 1)
        else:
            print(0)
    elif temp[0] == 3:
        for i in range(temp[1] - 1, temp[2]):
            print(arr[i], end=' ')
        print()

    