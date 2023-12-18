#include <iostream>
#include <string>
using namespace std;

int main() {
    string strArr[10] = {};
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        cin >> strArr[i];
        sum += strArr[i].length();
    }
    cout << sum << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}