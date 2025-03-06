def is_magic_number(n):
    if n % 3 == 0 or is_include(n):
        return True
    return False


def is_include(n):
    while n > 0:
        ret = n % 10

        if ret == 3 or ret == 6 or ret == 9:
            return True
        
        n = n // 10
    

a, b = map(int, input().split())
cnt = 0

for i in range(a, b + 1):
    if is_magic_number(i):
        cnt += 1
print(cnt) 