#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            for (int j = 1; j <= n; j++) {
                cout << j;
            }
        } // 증가
        else  {
            for (int j = n; j >= 1; j--) {
                cout << j;
            }
        } // 감소
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}