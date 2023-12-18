#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (islower(str[i])) str[i] = toupper(str[i]);
        else str[i] = tolower(str[i]);
    }
    cout << str;
    // 여기에 코드를 작성해주세요.
    return 0;
}