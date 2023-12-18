#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char temp;
    cin >> str;
    while(str != "END") {
        for (int i = 0; i < str.length() / 2.0; i++) {
            temp = str[i];
            str[i] = str[str.length() - 1 - i];
            str[str.length() - 1 - i] = temp; 
        }
        cout << str << endl;
        cin >> str;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}