n = int(input())
arr = [0 for _ in range(100 * 1000 * 5)]
countWhite = [0 for _ in range(100 * 1000 * 5)]
countBlack = [0 for _ in range(100 * 1000 * 5)]
pos = len(arr) // 2

for _ in range(n):
    x, dirt = input().split()
    x = int(x)

    if dirt == 'L':
        for i in range(pos, pos - x, -1):
            if (arr[i] == 2):
                continue

            countWhite[i] += 1
            
            if (countWhite[i] >= 2 and countBlack[i] >= 2):
                arr[i] = 2
                continue

            arr[i] = 1
        pos = pos - x + 1

    elif dirt == 'R':
        for i in range(pos, pos + x):
            if (arr[i] == 2):
                continue

            countBlack[i] += 1

            if (countWhite[i] >= 2 and countBlack[i] >= 2):
                arr[i] = 2
                continue
            
            arr[i] = -1
        pos = pos + x - 1

white, black, gray = 0, 0, 0

for i in range(len(arr)):
    if arr[i] == -1:
        black += 1
    elif arr[i] == 1:
        white += 1
    elif arr[i] == 2:
        gray += 1

print(white, black, gray)