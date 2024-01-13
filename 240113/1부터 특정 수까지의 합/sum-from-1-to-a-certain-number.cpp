#include <iostream>
using namespace std;

int returnDivTen(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++) sum += i;

    return sum / 10;
}
int main() {
    int N;
    cin >> N;
    cout << returnDivTen(N);
    // 여기에 코드를 작성해주세요.
    return 0;
}