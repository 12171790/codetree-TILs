#include <iostream>
using namespace std;

void drawRect(int N) {
    int num = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (num >= 10) num = 1;
            cout << num++ << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cin >> N;
    drawRect(N);
    // 여기에 코드를 작성해주세요.
    return 0;
}