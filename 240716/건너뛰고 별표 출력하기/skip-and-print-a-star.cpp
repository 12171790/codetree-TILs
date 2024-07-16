#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n * 2 - 1; i++) {

        if (i <= n) {
            for (int j = 0; j < i; j++) {
                cout << "*";
            }
        } else {
            for (int j = (n * 2 - 1) - i;  j >= 0; j--) {
                cout << "*";
            }
        }
        cout << endl << endl;
        
    }

    return 0;
}