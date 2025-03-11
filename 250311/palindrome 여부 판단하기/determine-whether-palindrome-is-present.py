def is_palindrome(str):
    temp = str[::-1]

    if temp == str:
        return True
    else:
        return False

str = input()

if is_palindrome(str):
    print("Yes")
else:
    print("No")