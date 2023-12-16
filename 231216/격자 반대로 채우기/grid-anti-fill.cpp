#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int **arr; //동적할당 받을 변수
    int n, num = 1;
    cin >> n;

    arr = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = (int*)malloc(sizeof(int) * n);
    }


    for (int i = n - 1; i >= 0; i--) {
        if (n % 2 == 0) {
            if (i % 2 == 0) {
                for (int j = 0; j < n; j++) {
                    arr[j][i] = num++;
                }
            }
            else {
                for (int j = n - 1; j >= 0; j--) {
                    arr[j][i] = num++;
                }
            }
        }
        else {
            if (i % 2 == 0) {
                for (int j = n - 1; j >= 0; j--) {
                    arr[j][i] = num++;
                }
            }
            else {
                for (int j = 0; j < n; j++) {
                    arr[j][i] = num++;
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
    // 여기에 코드를 작성해주세요.
    return 0;
}