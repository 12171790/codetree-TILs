#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b;
    for (int i = 1; i <= 9 ; i++) {
        for (int j = b; j >= a; j--) {
            if (j % 2 == 0) {
                printf("%d * %d = %d", j, i, j * i);
                if (j > a + 1) cout << " / ";
            }
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}