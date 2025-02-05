inp, q = input().split()
q = int(q)

for _ in range(q):
    arr = input().split()

    if arr[0] == '1':
        a, b = map(int, arr[1:])
        chA = inp[a - 1]
        chB = inp[b - 1]

        inp = list(inp)
        inp[a - 1] = chB
        inp[b - 1] = chA
        inp = ''.join(inp)

    elif arr[0] == '2':
        chA = arr[1]
        chB = arr[2]

        inp = list(inp)

        for i in range(len(inp)):
            if inp[i] == chA:
                inp[i] = chB
        inp = ''.join(inp)
    print(inp)
