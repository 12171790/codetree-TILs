#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 0, arr[100];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        cout << pow(arr[i], 2) << " ";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}