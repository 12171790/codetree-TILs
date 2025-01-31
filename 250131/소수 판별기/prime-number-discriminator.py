n = int(input())
answer = "P"

for i in range(2, n - 1):
    if n % i == 0:
        answer = "C"
        break

print(answer)