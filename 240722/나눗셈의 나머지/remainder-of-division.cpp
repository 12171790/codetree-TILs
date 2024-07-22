#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int* cnt = new int[10]();
    int a, b;
    int sum = 0;
    cin >> a >> b;

    while(a > 1) {
        cnt[a % b]++;
        a = a / b;
    }

    for (int i = 0; i < 10; i++) {
        sum += pow(cnt[i], 2);
    }

    cout << sum;

    delete [] cnt;
    return 0;
}