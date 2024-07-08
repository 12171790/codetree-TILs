#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    if (n < 5) {
        cout << "tiny" << endl;
    } else {
        cout << n * n << endl;
    }
    return 0;
}