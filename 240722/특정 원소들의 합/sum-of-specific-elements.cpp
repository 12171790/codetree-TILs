#include <iostream>
using namespace std;

int main() {
    int** arr = new int*[4];

    for (int i = 0; i < 4; i++) {
        arr[i] = new int[4];
    }

    int sum = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < i + 1; j++) {
            sum += arr[i][j];
        }
    }

    cout << sum;

    delete [] arr;
    return 0;
}