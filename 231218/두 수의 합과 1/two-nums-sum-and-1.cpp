#include <iostream>
#include <string>
using namespace std;

int main() {
    int num1, num2, count = 0;
    cin >> num1 >> num2;
    string str = "";
    
    str += to_string(num1 + num2);
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '1') count++;
    }
    cout << count;
    // 여기에 코드를 작성해주세요.
    return 0;
}