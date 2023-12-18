#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string inpStr;
    string str = "";
    cin >> inpStr;
    for (int i = 0; i < inpStr.length(); i++) {
        if(isalpha(inpStr[i])) str += toupper(inpStr[i]);
    }
    cout << str;
    // 여기에 코드를 작성해주세요.
    return 0;
}