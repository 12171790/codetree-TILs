#include <iostream>
using namespace std;

int cnt;

int returnNumber(int n) {
    cnt++;
    if (n == 1) return cnt - 1;

    if (n % 2 == 0) {
        return returnNumber(n / 2);
    }
    else {
        return returnNumber((n * 3) + 1);
    }
}

int main() {
    int n;
    cin >> n;
    cout << returnNumber(n);

    return 0;
}