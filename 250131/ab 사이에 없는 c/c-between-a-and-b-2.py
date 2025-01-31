a, b, c = map(int, input().split())
answer = "YES"

for i in range(a, b + 1):
    if i % c == 0:
        answer = "NO"

print(answer)