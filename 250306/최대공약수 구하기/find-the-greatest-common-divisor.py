def custom_lcm(n, m):
    ret = min(n, m)

    for i in range(ret, 0, -1):
        if n % i == 0 and m % i == 0:
            return i

n, m = map(int, input().split())
print(custom_lcm(n, m))