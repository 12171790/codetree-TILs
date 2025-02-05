inp = input()
L = len(inp)

print(inp)
for _ in range(L):
    inp = inp[-1] + inp[:-1]
    print(inp)