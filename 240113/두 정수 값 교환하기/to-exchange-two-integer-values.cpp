#include <iostream>
using namespace std;

void swap(int& n, int& m) {
    int temp;
    temp = n;
    n = m;
    m = temp;
}

int main() {
    int a, b;

    cin >> a >> b;
    swap(a, b);
    cout << a << " " << b;
    // 여기에 코드를 작성해주세요.
    return 0;
}