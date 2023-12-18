#include <iostream>
#include <string>
using namespace std;

int main() {
    string strArr[5] = {"apple", "banana", "grape", "blueberry",
    "orange"};
    char alp = 0;
    int cnt = 0;
    cin >> alp;

    for (int i = 0; i < 5; i++) {
        for (int j = 2; j < 4; j++) {
            if (strArr[i][j] == alp) {
                cout << strArr[i] << endl;
                cnt++;
                break;
            }
        }
    }
    cout << cnt << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}