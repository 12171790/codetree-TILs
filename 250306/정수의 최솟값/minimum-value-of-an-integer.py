def custom_min(a, b, c):
    return min((a, b, c))

a, b, c = map(int,input().split())
print(custom_min(a, b, c))