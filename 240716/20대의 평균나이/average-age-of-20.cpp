#include <iostream>
using namespace std;

int main() {
    int cnt = 0;
    int age = 0;
    int sum = 0;

    while(1) {
        cin >> age;

        if (age >= 20 && age < 30) {
            sum += age;
            cnt++;
        } else {
            break;
        }
    }

    cout << fixed;
    cout.precision(2);

    cout << sum / (double)cnt << endl;

    return 0;
}