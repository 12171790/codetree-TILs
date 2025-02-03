arr = list(map(int, input().split()))
evenArr = arr[1::2]
oddArr = arr[::2]

evenSum = sum(evenArr)
oddSum = sum(oddArr)

if evenSum > oddSum:
    print(evenSum - oddSum)
else:
    print(oddSum - evenSum)