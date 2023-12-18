#include <iostream>
#include <string>
using namespace std;

int main() {
    string srcStr;
    string tarStr;
    int cnt = 0;

    cin >> srcStr >> tarStr;

    for (int i = 0; i <= (int)srcStr.length() - (int)tarStr.length(); i++) {
        if (srcStr[i] == tarStr[0] && srcStr[i + 1] == tarStr[1]) {
            cnt++;
        }
    }

    cout << cnt;

    // 여기에 코드를 작성해주세요.
    return 0;
}