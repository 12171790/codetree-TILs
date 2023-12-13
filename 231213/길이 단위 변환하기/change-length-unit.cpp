#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    const double fitRatio = 30.48;
    const int mileRatio = 160934;
    double ft = 9.2, mi = 1.3;

    cout << fixed;
    cout.precision(1);
    cout << ft << "ft = " << ft * fitRatio << "cm" << endl;
    cout << mi << "mi = " << mi * mileRatio << "cm" << endl;

    return 0;
}