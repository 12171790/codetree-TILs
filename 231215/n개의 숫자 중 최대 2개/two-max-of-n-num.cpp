#include <iostream>
#include <stdlib.h>
#include <algorithm>

bool desc(int a, int b)
{
    return a > b;
}

using namespace std;
int main() {
    int n, max, max_;
    int* arr;

    cin >> n;
    arr = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // sort(arr, arr + n, desc);

    max = arr[0];
    max_ = arr[1];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max_ = max;
            max = arr[i];
        }
        else if (arr[i] > max_) {
            max_ = arr[i];
        }

    }

    cout << max << " " << max_;
    return 0;
}