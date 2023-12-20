#include <iostream>
using namespace std;

void nTimePrinter(int n) {
    if (n == 0) return;
    
    nTimePrinter(n - 1);
    cout << "HelloWorld" << endl;
}

int main() {
    int n;
    cin >> n;
    nTimePrinter(n);
    // 여기에 코드를 작성해주세요.
    return 0;
}