#include <iostream>
using namespace std;

int main() {
    char alp;
    cin >> alp;

    printf("%c\n", alp == 'a' ? 122 : alp - 1);
    return 0;
}