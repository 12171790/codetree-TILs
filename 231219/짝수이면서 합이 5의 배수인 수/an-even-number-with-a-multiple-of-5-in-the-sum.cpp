#include <iostream>
#include <string>
using namespace std;

void func(int n) {
    int sum = (n / 10) + (n % 10);
    if (n % 2 == 0 && sum % 5 == 0) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}

int main() {
    int num;
    cin >> num;
    func(num);
    // 여기에 코드를 작성해주세요.
    return 0;
}