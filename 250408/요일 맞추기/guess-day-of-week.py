num_of_days = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
day_of_the_week = ['Mon', 'Tue', 'Wed', 'Thu', 'Fri', 'Sat', 'Sun']
m1, d1, m2, d2 = map(int, input().split())

first_days, seconde_days = d1, d2

for i in range(1, m1):
    first_days += num_of_days[i]

for i in range(1, m2):
    seconde_days += num_of_days[i]

count_days = seconde_days - first_days

if count_days > 0:
    print(day_of_the_week[count_days % 7])
else:
    count_days = (abs(count_days) % 7) * -1

    print(day_of_the_week[count_days])

