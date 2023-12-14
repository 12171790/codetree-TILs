#include <iostream>
using namespace std;

int main() {
    int n, q, num, a, b;
    int arr[101], count_arr[101];
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < q; i++) {
        bool isthere = false;
        cin >> num;
        if (num == 3) cin >> a >> b;
        else cin >> a;

        if (num == 1) {
            cout << arr[a] << endl;
        }
        else if (num == 2) {
            for (int j = 1; j <= n; j++) {
                if (a == arr[j]) {
                    cout << j << endl;
                    isthere = !isthere;
                    break;
                }
            }
            if(!isthere) cout << 0 << endl;
        }
        else {
            for (int j = a; j <= b; j++) cout << arr[j] << " ";
            cout << endl;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}