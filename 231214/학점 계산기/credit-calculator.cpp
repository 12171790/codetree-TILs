#include <iostream>
using namespace std;
int main() {
    double arr[5] = {};
    int n;
    double avg = 0, sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    avg = sum / n;
    cout << fixed;
    cout.precision(1);
    cout << avg << endl;;
    if (avg >= 4) cout << "Perfect";
    else if (avg >= 3) cout << "Good";
    else cout << "Poor";
    // 여기에 코드를 작성해주세요.
    return 0;
}