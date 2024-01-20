#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 1) return 1;
    return n + sum(n - 1);
}

int main() {
    int N;
    cin >> N;
    cout << sum(N);
    // 여기에 코드를 작성해주세요.
    return 0;
}