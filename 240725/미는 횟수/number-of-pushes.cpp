#include <iostream>
using namespace std;

int main() {
    string a;
    string b;
    int cnt = 0;
    bool eql = false;

    cin >> a >> b;

    for (int i = 1; i < a.length(); i++) {
        a = a.substr(a.length() - 1, 1) + a.substr(0, a.length() - 1);

        if (a.compare(b) == 0) {
            cnt = i;
            eql = true;
        }
    }

    if (eql) {
        cout << cnt;
    } else {
        cout << -1;
    }

    return 0;
}