#include <iostream>
using namespace std;
void RecursivePrint(int n) {
    if(n == 0) return;
    cout << n << " ";
    RecursivePrint(n - 1);
    cout << n << " ";
}

int main() {
    int n;
    cin >> n;
    RecursivePrint(n);
    // 여기에 코드를 작성해주세요.
    return 0;
}