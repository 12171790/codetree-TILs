#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    str[1] = str[(int)str.length() - 2] = 'a';

    cout << str;
    // 여기에 코드를 작성해주세요.
    return 0;
}