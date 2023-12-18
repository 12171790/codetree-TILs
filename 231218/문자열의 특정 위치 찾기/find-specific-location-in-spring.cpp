#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char alp;

    cin >> str >> alp;

    if (str.find(alp) != string::npos) cout << str.find(alp);
    else cout << "No";
    // 여기에 코드를 작성해주세요.
    return 0;
}