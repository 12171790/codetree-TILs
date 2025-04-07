a, b, c, d = map (int, input().split())

AtoB = a * 60 + b
CtoD = c * 60 + d

print(CtoD - AtoB)