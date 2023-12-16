#include <iostream>
using namespace std;

int main() {
    int** arr;
    int n, m, r, c;

    cin >> n >> m;
    arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n] {0};
    }

    for (int i = 0; i < m; i++) {
        cin >> r >> c;
        arr[r - 1][c - 1] = r * c;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        delete arr[i];
    }
    delete arr;
}