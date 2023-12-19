#include <iostream>
#include <string>
using namespace std;

bool IsTSN(int n) {
    string str1 = to_string(n);
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] == '3' || str1[i] == '6' || str1[i] == '9') return true;
    }
    return false;
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