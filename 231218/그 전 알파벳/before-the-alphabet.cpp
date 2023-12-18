#include <iostream>

using namespace std;
int main() {
    char alp;
    cin >> alp;

    if (alp == 'a') cout << 'z';
    else cout << (char)(alp - 1);
    // 여기에 코드를 작성해주세요.
    return 0;
}