#include <iostream>
using namespace std;
int main() {
    char yn[3];
    int p[3];
    int sum = 0;

    for (int i = 0; i < 3; i++) {
        cin >> yn[i] >> p[i];

        if (yn[i] == 89) {
            if (p[i] >= 37) {
                sum++;
            }
        }
    }

    if (sum >= 2)
        cout << "E" << endl;
    else
        cout << "N" << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}