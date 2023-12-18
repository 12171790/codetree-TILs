#include <iostream>
#include <string>
using namespace std;

int main() {
    string strArr[4] = {};
    for (int i = 0; i < 4; i++) {
        cin >> strArr[i];
    }
    
    for (int i = 3; i >= 0; i--) {
        cout << strArr[i] << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}