n = int(input())
answer = 'N'

for i in range(2, n):
    if n % i == 0:
        answer = 'C'
        break
        
print(answer)