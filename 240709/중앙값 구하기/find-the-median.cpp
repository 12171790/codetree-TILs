#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    if (a > b) {
        if (b > c) {
            cout << b << endl;
        } else if (c > b) {
            if (a > c) {
                cout << c << endl;
            } else {
                cout << a << endl;
            }
        }
    } else {
        if (a > c) {
            cout << a << endl;
        } else if (c > a) {
            if (b > c) {
                cout << c << endl;
            } else {
                cout << b << endl;
            }
        }
    }

    return 0;
}