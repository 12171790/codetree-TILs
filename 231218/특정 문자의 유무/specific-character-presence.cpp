#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin >> str;

    if (str.find("ee") != string::npos) cout << "Yes ";
    else cout << "No ";
    if (str.find("ab") != string::npos) cout << "Yes";
    else cout << "No"; 
    // 여기에 코드를 작성해주세요.
    return 0;
}