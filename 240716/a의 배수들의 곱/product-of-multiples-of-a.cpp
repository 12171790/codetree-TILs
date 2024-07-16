#include <iostream>
using namespace std;

int main() {
    bool isMul = false;
    int a, b;
    int mul = 1;

    cin >> a >> b;

    for (int i = 1; i <= b; i++) {
        if (i % a == 0) {
            isMul = true;
            mul *= i;
        }
    }

    if (isMul) {
        cout << mul;
    } else {
        cout << 0;
    }

    return 0;
}