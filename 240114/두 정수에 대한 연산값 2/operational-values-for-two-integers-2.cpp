#include <iostream>
using namespace std;

void SpecialCalculator(int& a, int & b) {
    a > b ? a *= 2, b += 10 : a += 10, b *= 2;
}

int main() {
    int a, b;
    cin >> a >> b;
    SpecialCalculator(a, b);

    cout << a << " " << b;
    // 여기에 코드를 작성해주세요.
    return 0;
}