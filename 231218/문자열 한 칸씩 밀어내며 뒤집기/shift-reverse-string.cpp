#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char alp;
    int q, qNum;
    cin >> str >> q;
    for (int i = 0; i < q; i++) {
        cin >> qNum;
        if (qNum == 1) {
            alp = str[0];
            str.erase(0, 1);
            str += alp;
            cout << str << endl;
        }
        else if (qNum == 2) {
            alp = str[(int)str.length() - 1];
            str.erase((int)str.length() - 1, 1);
            str = alp + str;
            cout << str << endl;
        }
        else {
            char temp;
            for (int i = 0; i < (int)str.length() / 2.0; i++) {
                temp = str[i];
                str[i] = str[(int)str.length() - 1 - i];
                str[(int)str.length() - 1 - i] = temp;
            }
            cout << str << endl;
        }
    }    
    // 여기에 코드를 작성해주세요.
    return 0;
}