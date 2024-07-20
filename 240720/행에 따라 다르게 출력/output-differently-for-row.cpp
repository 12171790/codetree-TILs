#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            for (int j = 1; j <= n; j++) {
                cnt++;
                cout << cnt << " ";
            }
        } else {
            for (int j = 1; j <= n; j++) {
                cnt += 2;
                cout << cnt << " ";
            }
        }
        cout << endl;
    }

    return 0;
}