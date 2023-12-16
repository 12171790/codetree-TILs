#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int n;
    int** arr;

    cin >> n;
    arr = (int**)malloc(sizeof(int*) * n);
    for(int i = 0; i < n; i++) {
        arr[i] = (int*)malloc(sizeof(int*) * n);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) arr[i][j] = 1;
            else arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}