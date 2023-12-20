#include <iostream>
using namespace std;

int Fib(int n) {
    if(n == 1 || n == 2) return 1;

    return Fib(n - 1) + Fib(n - 2); 
}

int main() {
    int n;
    cin >> n;
    cout << Fib(n);
    // 여기에 코드를 작성해주세요.
    return 0;
}