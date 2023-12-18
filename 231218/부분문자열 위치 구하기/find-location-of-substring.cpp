#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, strPart;
    int cnt, idx;
    cin >> str >> strPart;

    // if (str.find(strPart) != string::npos) cout << str.find(strPart);
    // else cout << -1;

    for (int i = 0; i <= (int)str.length() - (int)strPart.length(); i++) {
        cnt = 0;
        for (int j = 0; j < (int)strPart.length(); j++) {
            idx = i;
            if (str[i + j] == strPart[j]) {
                cnt++;
            }
            else break;
        }
        if (cnt == strPart.length()) {
            cout << idx;
            break;
        }
        if (i == (int)str.length() - (int)strPart.length())
            cout << -1;
    }


    return 0;
}