#include <iostream>
#include <climits>
#include <stdlib.h>
using namespace std;

int main() {
    int n;
    int min = INT_MAX;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int num = abs(arr[i] - arr[j]);
            if (min > num) {
                min = num;
            }
        }
    }

    cout << min;

    delete [] arr;
    return 0;
}