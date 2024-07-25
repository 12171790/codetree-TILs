#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    char alp = str[1];

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == alp) {
            str[i] = str[0];
        }
    }

    cout << str;
    
    return 0;
}