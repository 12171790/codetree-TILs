#include <iostream>
using namespace std;
int main() {
    int start, end, sum, c = 0;
    cin >> start >> end;

    for (int i = start; i <= end; i++) {
        sum = 0;
        for (int j = 1; j <= (i / 2); j++) {
            if (i % j == 0) sum += j;
        }
        if (sum == i) c++;
    }
    cout << c << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}