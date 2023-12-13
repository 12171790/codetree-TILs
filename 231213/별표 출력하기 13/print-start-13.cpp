#include <iostream>
using namespace std;
int main() {
    int n, cnt = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        if (i == 1) {
            cout << "*";
        }
        else {
            for (int j = 0; j < n - cnt; j++) {
                cout << "* ";
            }
            cnt++;
        }
        cout << endl;
    }
    cnt--;
    for (int i = n - 1; i >= 0; i--) {
        if (i == 1) {
            cout << "*";
        }
        else {
            for (int j = 0; j < n - cnt; j++) {
                cout << "* ";
            }
            cnt--;
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}