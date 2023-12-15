#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int n, m;
    int** A_arr;
    int** B_arr;
    int** resultArr;

    cin >> n >> m;
    A_arr = (int**)malloc(sizeof(int*) * n);
    B_arr = (int**)malloc(sizeof(int*) * n);
    resultArr = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < m; i++) {
        A_arr[i] = (int*)malloc(sizeof(int) * m);
        B_arr[i] = (int*)malloc(sizeof(int) * m);
        resultArr[i] = (int*)malloc(sizeof(int) * m);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A_arr[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> B_arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A_arr[i][j] == B_arr[i][j]) {
                resultArr[i][j] = 0;
            }
            else {
                resultArr[i][j] = 1;
            }
            cout << resultArr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        free(A_arr[i]);
        free(B_arr[i]);
        free(resultArr[i]);
    }

    free(A_arr);
    free(B_arr);
    free(resultArr);
}