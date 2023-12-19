#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string& str) {
    for (int i = 0; i < str.length() / 2; i++) {
        if (str[i] != str[str.length() - 1 - i]) return false;
    }
    return true;
}

int main() {
    string str;
    cin >> str;
    if (isPalindrome(str)) cout << "Yes" << endl;
    else cout << "No" << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}