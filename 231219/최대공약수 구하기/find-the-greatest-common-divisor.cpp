#include <iostream>
using namespace std;

void Print(int n, int m) {
    bool* arr1 = new bool [n] {false};
    bool* arr2 = new bool [m] {false};
    int max = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            arr1[i] = true;
        }
    }
    for (int i = 1; i <= m; i++) {
        if (m % i == 0) {
            arr2[i] = true;
        }
    }

    if (n > m) {
        for (int i = 1; i <= m; i++) {
            if (arr1[i] && arr2[i]) max = i;
        }
    }
    else {
        for (int i = 1; i <= n; i++) {
            if (arr1[i] && arr2[i]) max = i;
        }
    }

    cout << max << endl;
}

int main() {
    int n, m;
    cin >> n >> m;

    Print(n, m);
    // 여기에 코드를 작성해주세요.
    return 0;
}