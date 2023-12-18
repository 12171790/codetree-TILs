#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = {};
    int n;
    cin >> str;
    cin >> n;
    for (int i = 0; i < n; i++) {
        if ((int)str.length() - 1 - i >= 0) {
            cout << str[str.length() - 1 - i];
        }
        else break;

    }
    // 여기에 코드를 작성해주세요.
    return 0;
}