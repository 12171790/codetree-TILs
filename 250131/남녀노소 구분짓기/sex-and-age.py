sex = int(input())
age = int(input())

if age >= 19:
    if sex == 1:
        print("WOMAN")
    else:
        print("MAN")
else:
    if sex == 1:
        print("GIRL")
    else:
        print("BOY")