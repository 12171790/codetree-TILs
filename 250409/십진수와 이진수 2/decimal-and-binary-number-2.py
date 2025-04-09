binary = input()
digit = 0

for el in binary:
    digit = digit * 2 + int(el)

digit = digit * 17

binary = []

while True:
    if digit < 2:
        binary.append(digit)
        break
    
    binary.append(digit % 2)
    digit //= 2

for el in binary[::-1]:
    print(el, end='')
    
