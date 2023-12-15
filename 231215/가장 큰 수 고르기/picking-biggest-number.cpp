#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int arr[10];
    int maxVal;

    for (int i = 0; i < 10; i++)
        cin >> arr[i];
    maxVal = arr[0];

    for (int i = 1; i < 10; i++) {
        if (arr[i] > maxVal) 
            maxVal = arr[i];
    }
    cout << maxVal;

    // 여기에 코드를 작성해주세요.
    return 0;
}