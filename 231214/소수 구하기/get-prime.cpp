#include <iostream>
using namespace std;
int main() {
    int n, a = 0;
    cin >> n;

    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= i - 1; j++) {
            if (i % j == 0) {
                a = 1;
                break;
            }
        }
        if (a == 0) cout << i << " ";
        else a = 0;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}