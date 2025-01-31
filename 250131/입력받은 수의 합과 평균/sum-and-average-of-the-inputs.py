n = int(input())
sum = 0
avg = 0

for _ in range(n):
    num = int(input())
    sum += num;
avg = sum / n
print(f"{sum} {avg:.1f}")