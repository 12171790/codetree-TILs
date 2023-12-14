#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    bool arr[n + 1];

    arr[0] = arr[1] = true;
    //초기화
    for (int i = 2; i < n + 1; i++) arr[i] = true;

    for (int i = 2; i < sqrt(n); i++) {
        if (arr[i]) {
            for (int j = i + i; j < n; j += i) arr[j] = false;
        }
    }

    for (int i = 2; i < n; i++) {
        if (arr[i]) cout << i << " ";
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}