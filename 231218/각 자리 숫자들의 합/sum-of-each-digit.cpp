#include <iostream>
#include <string>
using namespace std;

int main() {
    int num1, sum = 0;
    string str;
    cin >> num1;
    str = to_string(num1);

    for (int i = 0; i < str.length(); i++) {
        sum += ((int)str[i] - 48);
    }
    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}