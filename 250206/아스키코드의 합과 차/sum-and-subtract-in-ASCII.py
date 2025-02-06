a, b = map(ord, input().split())

print(a + b, end=' ')
if a > b:
    print(a - b)
else:
    print(b - a)