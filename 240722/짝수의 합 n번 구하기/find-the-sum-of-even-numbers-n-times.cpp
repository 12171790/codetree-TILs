#include <iostream>
using namespace std;

int main() {
    int n;
    int a[10], b[10];
    int sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = a[i]; j <= b[i]; j++) {
            if (j % 2 == 0) {
                sum += j;
            }
        }
        cout << sum << endl;
        sum = 0;
    }

    return 0;
}