#include <iostream>
using namespace std;

int isNumber(int a, int b) {
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (i % 2 != 0) {
            if (i % 10 != 5) {
                if (i % 3 != 0 || i % 9 == 0) {
                    cnt++;
                }
            }
        }
    }

    return cnt;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << isNumber(a, b);
    return 0;
}