#include <iostream>
using namespace std;

int main() {
    int a, n;
    cin >> a >> n;

    for (int i = 0; i < n; i++) {
        cout << (a+=n) << endl;
    }

    return 0;
}