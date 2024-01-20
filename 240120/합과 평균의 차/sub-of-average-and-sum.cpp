#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >>c;
    int sum = a + b + c;
    double avg = sum / 3.0;

    cout << sum << endl << avg << endl;
    cout << (sum - avg);
    // 여기에 코드를 작성해주세요.
    return 0;
}