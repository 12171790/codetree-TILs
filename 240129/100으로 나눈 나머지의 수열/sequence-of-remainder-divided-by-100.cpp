#include <iostream>
using namespace std;

int returnNthNumber(int n) {
    if (n == 1) return 2;
    else if (n == 2) return 4;
    else return (returnNthNumber(n - 1) * returnNthNumber(n - 2)) % 100;
}

int main() {
    int N;
    cin >> N;
    cout << returnNthNumber(N);
    return 0;
}