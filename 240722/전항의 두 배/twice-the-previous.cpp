#include <iostream>
using namespace std;

int main() {
    int* arr = new int[10];

    cin >> arr[0] >> arr[1];

    for (int i = 0; i < 10; i++) {
        if (i < 2) {
            cout << arr[i] << " ";
        } else {
            arr[i] = arr[i - 1] + arr[i - 2] * 2;
            cout << arr[i] << " ";
        }
    }

    delete [] arr;

    return 0;
}