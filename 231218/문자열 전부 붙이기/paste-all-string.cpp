#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string strInp, str = "";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> strInp;
        str += strInp;
    }
    cout << str;
    // 여기에 코드를 작성해주세요.
    return 0;
}