#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "";
    string strRLE = "";
    int idx = 0;
    cin >> str;
    int cnt = 0;

    for (int i = 1; i < str.length(); i++) {
        if (str[i - 1] == str[i]) 
            cnt++;
        else {
            strRLE += str[i - 1];//빈 문자열에 문자를 추가할 경우
            strRLE += to_string(++cnt);
            cnt = 0;
        }
    }
    strRLE += str[(int)str.length() - 1];
    strRLE += to_string(++cnt);

    cout << strRLE.length() << endl << strRLE;
    // 여기에 코드를 작성해주세요.
    return 0;
}