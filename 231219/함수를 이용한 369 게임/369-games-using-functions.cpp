#include <iostream>
using namespace std;

bool IsTSN(int n) {
    return (n % 10) == 3 || (n % 10) == 6 || (n % 10) == 9 || (n / 10) == 3 || (n / 10) == 6 || (n / 10) == 9;
}

bool IsMagicNumber(int n) {
    return n % 3 == 0 || IsTSN(n);
}

int main() {
    int a, b, cnt = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if(IsMagicNumber(i)) cnt++;
    }

    cout << cnt << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}