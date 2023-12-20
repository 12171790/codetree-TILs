#include <iostream>
using namespace std;

int Sum(int n) {
    if(n == 1) return 1;
    if(n == 2) return 2;

    if(n % 2 == 0) return n + Sum(n - 2);
    else return n + Sum(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << Sum(n);
    // 여기에 코드를 작성해주세요.
    return 0;
}