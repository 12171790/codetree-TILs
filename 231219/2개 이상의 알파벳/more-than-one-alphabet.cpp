#include <iostream>
#include <string>
using namespace std;

bool isMoreThanTwo(string str, int n) {
    char alp = str[0];
    int cnt = 0;
    for (int i = 1; i < n; i++) {
        if (str[i] != alp) return true;
    }
    return false;
}

int main() {
    string strA = "";
    cin >> strA;

    if(isMoreThanTwo(strA, strA.length())) cout << "Yes" << endl;
    else cout << "No" << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}