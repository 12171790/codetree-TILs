#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, sum = 0, cnt = 0;
    cin >> n;
    string* strArr;
    strArr = new string [n];
    
    for (int i = 0; i < n; i++) {
        cin >> strArr[i];
        for (int j = 0; j < strArr[i].length(); j++) {
            if (strArr[i][j] == 'a') {
                cnt++;
                break;
            }
        }
        sum += strArr[i].length();
    }

    cout << sum << " " << cnt << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}