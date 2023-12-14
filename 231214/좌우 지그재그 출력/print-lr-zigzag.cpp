#include <iostream>
using namespace std;
int main() {
    int n, cnt = 1;
    cin >> n;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                cout << cnt << " ";
                if(j != (n - 1))
                    cnt++;
            }
        } //증가
        else {
            for (int j = 0; j < n; j++) {
                cout << cnt << " ";
                if (j != (n - 1))
                    cnt--;
            }
        } //감소
        cnt += n;
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}