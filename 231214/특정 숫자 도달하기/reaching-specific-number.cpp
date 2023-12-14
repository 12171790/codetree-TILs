#include <iostream>
using namespace std;
int main() {
    int arr[10] = {};
    int sum = 0, cnt = 0;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++) {
        if (arr[i] >= 250) break;
        else {
            sum += arr[i];
            cnt++;
        }
    }
    cout << sum << " " << (double)sum / cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}