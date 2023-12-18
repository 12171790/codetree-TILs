#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string strNum1 = "", strNum2 ="";
    string strInp1, strInp2;
    int num1, num2;
    cin >> strInp1 >> strInp2;
    
    for (int i = 0; i < strInp1.length(); i++) {
        if(!isalpha(strInp1[i])) strNum1 += strInp1[i];
    }
    for (int i = 0; i < strInp2.length(); i++) {
        if(!isalpha(strInp2[i])) strNum2 += strInp2[i];
    }
    num1 = stoi(strNum1);
    num2 = stoi(strNum2);

    cout << num1 + num2 << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}