#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, cnt = 0;
    string A;
    string inpStr;
    cin >> n >> A;
    for (int i = 0; i < n; i++) {
        cin >> inpStr;
        if (A == inpStr) cnt++;
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}