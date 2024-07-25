#include <iostream>
using namespace std;

int main() {
    string a;
    string b;
    int cnt = 0;
    cin >> a >> b;

    for (int i = 0; i < a.length() - 1; i++) {
        if(a[i] == b[0]) {
            if (a[i + 1] == b[1]) {
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}