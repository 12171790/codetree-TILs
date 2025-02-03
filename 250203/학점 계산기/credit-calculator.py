n = int(input())
score = list(map(float, input().split()))
avg = sum(score) / n

print(f'{avg:.1f}')
if avg >= 4:
    print('Perfect')
elif avg >= 3:
    print('Good')
else:
    print('Poor')