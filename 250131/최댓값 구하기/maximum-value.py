a, b, c = map(int, input().split())

if a > b:
    if a > c:
        print(a)
    elif c > a:
        print(c)
else:
    if b > c:
        print(b)
    else:
        print(c)