#include <iostream>
#include <string>
using namespace std;

int SearchPartString(string str, string tarStr) {
    // int cnt;
    // for (int i = 0; i <= str.length() - tarStr.length(); i++) {
    //     for (int j = 0; j < tarStr.length(); j++) {
    //         if (str[i + j] == tarStr[j]) cnt++;
    //         else break;
    //     }
    //     if (cnt == tarStr.length()) return i;
    //     else cnt = 0;
    // }
    // return -1;
    if(str.find(tarStr) != string::npos) return str.find(tarStr);
    else return -1;
}

int main() {
    string str;
    string tarStr;
    cin >> str >> tarStr;
    cout << SearchPartString(str, tarStr);
    // 여기에 코드를 작성해주세요.
    return 0;
}