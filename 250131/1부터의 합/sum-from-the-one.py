n = int(input())
sum = 0
answer = 0

for i in range(1, 101):
    sum += i
    if sum >= n:
        answer = i
        break;
print(answer)