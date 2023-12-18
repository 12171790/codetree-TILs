#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int startIdx;
    cin >> str;
    startIdx = str.find('e');
    str.erase(startIdx, 1);
    cout << str;
    // 여기에 코드를 작성해주세요.
    return 0;
}