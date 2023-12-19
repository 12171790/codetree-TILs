#include <iostream>
#include <cmath>
using namespace std;

bool IsPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}


int main() {
    int a, b, sum = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if(IsPrime(i)) sum += i;
    }

    cout << sum << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}