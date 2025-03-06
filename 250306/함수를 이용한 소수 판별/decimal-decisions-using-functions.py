def is_prime(n):
    for i in range(2, n):
        if n % i == 0:
            return False
    return True

def prime_sum(a, b):
    sum = 0;
    for i in range(a, b + 1):
        if is_prime(i):
            sum += i
    return sum


a, b = map(int, input().split())
print(prime_sum(a, b))