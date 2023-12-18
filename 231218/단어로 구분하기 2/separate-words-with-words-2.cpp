#include <iostream>
#include <string>
using namespace std;

int main() {
    string strArr[10] = {};

    for (int i = 0; i < 10; i++) {
        cin >> strArr[i];
        if (i % 2 == 0) cout << strArr[i] << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}