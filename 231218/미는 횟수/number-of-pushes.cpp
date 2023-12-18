#include <iostream>
#include <string>
using namespace std;

int main() {
    string strA, strB;
    char temp = 0;
    int num = 0;

    cin >> strA >> strB;

    while (strA != strB) {
        temp = strA[(int)strA.length() - 1];
        strA.erase((int)strA.length() - 1, 1);
        strA = temp + strA;
        num++;
        if (num == strA.length()) {
            num = -1;
            break;
        }
    }

    cout << num;
    // 여기에 코드를 작성해주세요.
    return 0;
}