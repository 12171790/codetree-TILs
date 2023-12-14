#include <iostream>
using namespace std;

int main() {
    int arr[100], arr_count[10] = {};
    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        arr_count[arr[i]]++;
    }

    for (int i = 1; i < 10; i++) {
        cout << arr_count[i] << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}