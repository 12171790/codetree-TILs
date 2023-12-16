#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int** arr;
    int n;
    int m;
    int r, c;

    cin >> n >> m;

    int** arr1 = new int* [n];
    for (int i = 0; i < n; i++) {
        arr1[i] = new int [n] {0};
    }


    for (int i = 0; i < m; i++) {
        cin >> r >> c;
        arr1[r - 1][c - 1] = 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(arr1[i][j] == 1) cout << arr1[i][j] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}