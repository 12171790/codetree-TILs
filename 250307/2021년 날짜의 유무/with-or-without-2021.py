def is_exist(m, d):
    date = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    if m >= 1 and m <= 12:
        if d <= date[m]:
            return True
    return False

m, d = map(int, input().split())

if is_exist(m, d):
    print("Yes")
else:
    print("No")