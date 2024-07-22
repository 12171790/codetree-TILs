#include <iostream>
using namespace std;

int main() {
    int n;
    char alp = 65;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // 알파벳 출력
            if (j < i) {
                cout << " ";
            } else {
                printf("%c", alp > 90 ? alp = 65 : alp);
                alp++;
            }

            // 줄바꿈
            if (j == n - 1) {
                cout << endl;
            } else {
                cout << " ";
            }
        }
    }

    return 0;
}