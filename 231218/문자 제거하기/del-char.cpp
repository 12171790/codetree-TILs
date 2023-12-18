#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    string str;
    cin >> str;

    while (str.length() != 1) {
        cin >> num;
        if (num >= str.length()) str.erase(str.length() - 1, 1);
        else str.erase(num, 1);
        cout << str << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}