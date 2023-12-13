#include <iostream>
using namespace std;
int main() {
    int n = 0;
    cin >> n;
    // 별 9 7 5 3 1
    // 공백 1 2 3 4 5
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i ; j++) {
            cout << "  ";
        }
        for (int j = 0; j < 2 * (n - (i + 1)) + 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}