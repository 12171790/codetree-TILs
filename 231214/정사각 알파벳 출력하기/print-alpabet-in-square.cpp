#include <iostream>
using namespace std;
int main() {
    int n, al = 65;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << (char)al++;
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}