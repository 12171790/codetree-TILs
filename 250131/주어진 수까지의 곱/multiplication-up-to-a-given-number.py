prod = 1
a, b = map(int, input().split())

for i in range(a, b + 1):
    prod *= i
print(prod)