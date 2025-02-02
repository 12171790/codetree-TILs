n = int(input())

for i in range(n):
    for j in range(n):
        print(10 + ((i * 2) + (j * 2 + 1)), end = ' ')
    print()