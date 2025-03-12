def is_more_than_two(str):
    if len(str) > 1:
        for i in range(1, len(str) - 1):
            if str[i] != str[i + 1]:
                return True
        
    return False

str = input()

if is_more_than_two(str):
    print("Yes")
else:
    print("No")