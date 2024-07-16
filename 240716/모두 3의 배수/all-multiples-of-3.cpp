#include <iostream>
using namespace std;

int main() {
    int arr[5] = {};
    bool satisfied = true;
    
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];

        if (arr[i] % 3 != 0) {
            satisfied = false;
        }
    }

    if (satisfied) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}