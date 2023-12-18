#include <iostream>
#include <string>
using namespace std;

int main() {
    string strInp, str = "";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> strInp;
        str += strInp;
    }

    for (int i = 0; i < (int)str.length(); i++) {
        if (i % 5 == 0 && i != 0) cout << endl;
        cout << str[i];
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}