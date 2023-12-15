#include <iostream>
#include <stdlib.h>
#include <algorithm>

bool desc(int a, int b)
{
    return a > b;
}

using namespace std;
int main() {
    int n;
    int* arr;

    cin >> n;
    arr = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr + n, desc);

    cout << arr[0] << " " << arr[1];
    // 여기에 코드를 작성해주세요.
    return 0;
}