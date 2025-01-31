n = int(input())

for i in range(1, n + 1):
    strI = str(i)

    if i % 3 == 0 or ("3" in strI or "6" in strI or "9" in strI):
        print(0, end = ' ')
    else:
        print(i, end = ' ')
