#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    int num = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        sum += num;
    }

    string str = to_string(sum);

    str = str.substr(1, str.length() - 1) + str.substr(0, 1);

    cout << str << endl;

    return 0;
}