arr = []
result = 0;

for i in range(0, 3):
    arr.append(input().split())
    arr[i][1] = int(arr[i][1])

for temp in arr:
    if temp[0] == "Y" and temp[1] >= 37:
        result += 1


if result >= 2:
    print("E")
else:
    print("N")




