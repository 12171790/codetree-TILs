#include <iostream>
#include <string>
using namespace std;
int main() {
    char alp = 0;
    char lastAlp = 0;
    int cnt = 0;
    string strArr[10] = {};

    for (int i = 0; i < 10; i++) {
        cin >> strArr[i];
    }
    cin >> alp;

    for (int i = 0; i < 10; i++) {
        lastAlp = strArr[i][strArr[i].length() - 1];
        if (alp == lastAlp) {
            cout << strArr[i] << endl;
            cnt++;
        }
    }
    if (cnt == 0) cout << "None" << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}