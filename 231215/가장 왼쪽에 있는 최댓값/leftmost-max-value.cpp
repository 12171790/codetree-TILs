#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int n, max, idx = 0, idxSub = 1;
    int* arr;

    cin >> n;
    arr = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            idx = i;
        } 
    }
    max = arr[0];
    cout << idx + 1 << " ";

    while(idxSub != 0) {
        for (int i = 0; i < idx; i++) {
            if (arr[i] > max) {
                max = arr[i];
                idxSub = i;
            }
        }
        if (max == arr[0]) idxSub = 0;
        idx = idxSub;
        cout << idxSub + 1 << " ";
        max = arr[0];
    }


    free(arr);
    return 0;
}