#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d * %d = %d", i, j, i * j);
            if (j < n)
                cout << ", ";
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}