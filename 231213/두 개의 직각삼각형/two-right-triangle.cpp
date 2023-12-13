#include <iostream>
using namespace std;
int main() {
    int n, cnt = 0;
    cin >> n;
    cnt = n;
    //별 ... 8 6 4 2
    //공백 0 2 4 6 ...
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * (n - i); j++) {
            if (j == cnt) {
                for (int k = 0; k < 2 * i; k++) {
                    cout << " ";
                }
            }
            cout << "*";
        }
        cnt--;
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}