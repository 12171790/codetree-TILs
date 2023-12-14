#include <iostream>
using namespace std;
int main() {
    int n1, n2, temp;
    
    cin >> n1 >> n2;
    cout << n1 << " " << n2 << " ";
    for (int i = 0; i < 8; i++) {
        temp = 2 * n1 + n2;
        n1 = n2;
        n2 = temp;

        cout << temp << " ";
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}