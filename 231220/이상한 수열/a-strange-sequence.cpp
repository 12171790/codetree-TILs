#include <iostream>
#include <vector>
using namespace std;

int FindNumber(int n) {
    if(n == 1) return 1;
    if(n == 2) return 2;

    return FindNumber(n / 3) + FindNumber(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << FindNumber(n);
    // 여기에 코드를 작성해주세요.
    return 0;
}