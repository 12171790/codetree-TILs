#include <iostream>
using namespace std;

int main() {
    int* arr = new int[10];
    
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++) {
        if (arr[i] % 3 == 0) {
            cout << arr[i - 1];
            break;
        }
    }

    delete [] arr;
    return 0;
}