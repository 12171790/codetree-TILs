#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int j = 0; j <= n - i; j++) {
            cout << i + j << " ";
        }
        cout << endl;
    }
    return 0;
}