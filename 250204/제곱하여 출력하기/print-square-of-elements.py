n = int(input())
arr = list(map(int, input().split()))
temp = [el ** 2 for el in arr]

for el in temp:
    print(el, end=' ')