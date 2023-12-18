#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    string strAB, strBA;
    cin >> str1 >> str2;
    strAB = str1 + str2;
    strBA = str2 + str1;
    cout << stoi(strAB) + stoi(strBA);
    // 여기에 코드를 작성해주세요.
    return 0;
}