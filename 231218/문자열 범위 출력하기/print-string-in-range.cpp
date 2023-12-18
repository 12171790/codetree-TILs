#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    getline(cin, str);
    for (int i = 2; i < 10; i++) {
        cout << str[i];
    }
    cout << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}