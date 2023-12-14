#include <iostream>
using namespace std;

int main() {
    int tem, count_arr[4] = {};
    char sym;

    for (int i = 0; i < 3; i++) {
        cin >> sym >> tem;
        if (sym == 'Y' && tem >= 37) count_arr[0]++;
        else if (sym == 'N' && tem >= 37) count_arr[1]++;
        else if (sym == 'Y' && tem < 37) count_arr[2]++;
        else count_arr[3]++;
    }

    for (int i = 0; i < 4; i++) {
        cout << count_arr[i] << " ";
    }
    if (count_arr[0] >= 2) cout << 'E' << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}