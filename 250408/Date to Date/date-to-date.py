num_of_days = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

m1, d1, m2, d2 = map(int, input().split())

firstNum, secondNum = d1 - 1, d2

for i in range(1, m1):
    firstNum += num_of_days[i]

for i in range(1, m2):
    secondNum += num_of_days[i]

print(secondNum - firstNum)