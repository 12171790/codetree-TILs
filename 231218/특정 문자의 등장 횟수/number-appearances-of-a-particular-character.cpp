#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int cntE = 0, cntB = 0;
    cin >> str;

    for (int i = 0; i < (int)str.length() - 1; i++) {
        if (str[i] == 'e' && str[i + 1] == 'e') cntE++;
        if (str[i] == 'e' && str[i + 1] == 'b') cntB++; 
    }
    cout << cntE << " " << cntB;
    // 여기에 코드를 작성해주세요.
    return 0;
}