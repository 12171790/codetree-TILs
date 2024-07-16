#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 1;

    cin >> n;

    while(1) {
        n = n / cnt;

        if (n <= 1) {
            break;
        }
        cnt++;
    } 

    cout << cnt;

    return 0;
}