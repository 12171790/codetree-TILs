def if_leap_year(y):
    if y % 4 != 0:
        return False
    if y % 100 == 0 and y % 400 != 0:
        return False
    return True

y = int(input())

if if_leap_year(y):
    print("true")
else:
    print("false")