#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "", str2 = "", strInp1, strInp2;

    cin >> strInp1 >> strInp2;
    str1 = str1 + strInp1 + strInp2;
    str2 = str2 + strInp2 + strInp1;

    if (str1.compare(str2) == 0) cout << "true" << endl;
    else cout << "false" << endl;

    // 여기에 코드를 작성해주세요.
    return 0;
}