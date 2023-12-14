#include <iostream>
using namespace std;
int main() {
    int arr[100] = {};
    int sum = 0, num = 0, n = 0;
    for (int i = 0; i < 100; i++) {
        cin >> arr[i];
        n++;
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            num = i;
            break;
        }
    }
    for (int i = num - 3; i < num; i++) {
        sum += arr[i];
    }
    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}