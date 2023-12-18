#include <iostream>
#include <string>
using namespace std;
int main() {
    string srcStr;
    string tarStr;
    cin >> srcStr >> tarStr;
    int startIdx = srcStr.find(tarStr);
    while (startIdx != string::npos) {
        srcStr.erase(startIdx, tarStr.length());
        startIdx = srcStr.find(tarStr);
    }

    cout << srcStr;
    // 여기에 코드를 작성해주세요.
    return 0;
}