num_of_days = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

m1, d1, m2, d2 = map(int, input().split())

firstNum, secondNum = 0, 0

for i in range(1, m1 + 1):
    firstNum += num_of_days[i]

firstNum += d1

for i in range(1, m2 + 1):
    secondNum += num_of_days[i]

secondNum += d2

print(secondNum - firstNum)