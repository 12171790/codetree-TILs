#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    char alp = 0;
    
    alp = str[0];
    str.erase(0, 1);
    str += alp;
    cout << str;
    // 여기에 코드를 작성해주세요.
    return 0;
}