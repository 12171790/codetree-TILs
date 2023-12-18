#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main() {
    string s;
    int q, qNum = 0, num1, num2;
    char firstAlp = 0, secondAlp = 0;
    cin >> s >> q;
    for (int i = 0; i < q; i++) {
        cin >> qNum;
        if (qNum == 1) {
            // strcpy(sTemp, s); // sTemp가 문자열 포인터 (string)일 경우 저장된 메모리 주소는 복사할 공간이 할당되어 있지 않고, 쓰기가 막혀 있기 때문에 오류 발생.
            cin >> num1 >> num2;
            char temp = s[num1 - 1];
            s[num1 - 1] = s[num2 - 1];
            s[num2 - 1] = temp;

            cout << s << endl;
        }
        else {
            cin >> firstAlp >> secondAlp;

            for (int i = 0; i < s.length(); i++) {
                if (s[i] == firstAlp) s[i] = secondAlp;
            }

            cout << s << endl;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}