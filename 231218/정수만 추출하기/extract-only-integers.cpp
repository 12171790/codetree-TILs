#include <iostream>
#include <string>
using namespace std;

int main() {
    string inpStr1, inpStr2;
    string str1 = "", str2 = "";
    int sum;
    cin >> inpStr1 >> inpStr2;

    for (int i = 0; i < inpStr1.length(); i++) {
        if (inpStr1[i] >= 48 || inpStr1[i] <= 57) str1 += inpStr1[i];
        else break;
    }

     for (int i = 0; i < inpStr2.length(); i++) {
        if (inpStr2[i] >= 48 || inpStr2[i] <= 57) str2 += inpStr2[i];
        else break;
    }

    sum = stoi(str1) + stoi(str2);
    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}