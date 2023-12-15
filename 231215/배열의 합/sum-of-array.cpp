#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
    int* arr[4];
    int sum;

    for (int i = 0; i < 4; i++) {
        arr[i] = (int*)malloc(sizeof(int) * 4);
    }

    

    for (int i = 0; i < 4; i++) {
        sum = 0;
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}