#include <iostream>
using namespace std;

int main() {
    int a, b;
    bool isThere = false;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (1920 % i == 0) {
            if (2880 % i == 0) {
                isThere = true;
                break;
            }
        }
    }

    if (isThere) {
        cout << 1;
    } else {
        cout << 0;
    }

    return 0;
}