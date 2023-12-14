#include <iostream>
using namespace std;
int main() {
    int n, a, b;
    int mul;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        mul = 1;
        for (int j = a; j <= b; j++) {
            mul *= j;
        }
        cout << mul << endl;
     }
    // 여기에 코드를 작성해주세요.
    return 0;
}