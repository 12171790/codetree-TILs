#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 1;
    cin >> n;
    
    int** arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }

    if (n % 2== 0) {
        for (int i = n - 1; i >= 0; i--) {
            if (i % 2 == 0) {
                for (int j = 0; j < n; j++) {
                    arr[j][i] = cnt++;
                }
            } else {
                for (int j = n - 1; j >= 0; j--) {
                    arr[j][i] = cnt++;
                }
            }
        }
    } else {
        for (int i = n - 1; i >= 0; i--) {
            if (i % 2 == 0) {
                for (int j = n - 1; j >= 0; j--) {
                    arr[j][i] = cnt++;
                }
            } else {
                for (int j = 0; j < n; j++) {
                    arr[j][i] = cnt++;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}