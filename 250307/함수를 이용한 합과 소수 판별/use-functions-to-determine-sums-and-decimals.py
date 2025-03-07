def is_prime(n):
    if n == 1:
        return False

    for i in range(2, n):
        if n % i == 0:
            return False
        
    return True


def sum_is_even(n):
    sum = 0

    while n > 0:
        sum += n % 10
        n = n // 10

    if sum % 2 == 0:
        return True
    else:
        return False


def is_num(a, b):
    cnt = 0
    for i in range(a, b + 1):
        if is_prime(i) and sum_is_even(i):
            cnt += 1

    return cnt

a, b = map(int, input().split())

print(is_num(a, b))