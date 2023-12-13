#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0) {
                cout << "* ";
            }
            else if (j == n - 1) {
                cout << "* ";
            }
            else if (j >= i) {
                cout << "  ";
            }
            else {
                cout << "* ";
            }
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}