#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
    int n, maxRev, idx;
    int* priceArr;
    
    cin >> n;
    priceArr = (int*)malloc(sizeof(int) * n);

    for(int i = 0; i < n; i++) {
        cin >> priceArr[i];
    }
    
    maxRev = 0;
    for(int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (priceArr[j] - priceArr[i] > maxRev) {
                maxRev = priceArr[j] - priceArr[i];
            }
        }
    }
    cout << maxRev;

    free(priceArr);
    return 0;
}