aMath, aEng = map(int, input().split())
bMath, bEng = map(int, input().split())

if bMath > aMath or (bMath == aMath and bEng > aEng):
    print("B")
else:
    print("A")