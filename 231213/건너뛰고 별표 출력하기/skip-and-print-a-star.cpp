#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        cout << endl << endl;
    }

    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < i + 1; j++ ) {
            cout << "*";
        }
        cout << endl << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}