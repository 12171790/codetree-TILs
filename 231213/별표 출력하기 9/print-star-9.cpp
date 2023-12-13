#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    // 별 1 3 5 7 ...
    // 공백 ... 6 4 2 0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n - i - 1); j++) {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}