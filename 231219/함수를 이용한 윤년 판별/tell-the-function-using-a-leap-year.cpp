#include <iostream>
using namespace std;

bool isLeapYear(int y) {
    if (y % 4 == 0) {
        if (y % 100 == 0) {
            if (y % 400 == 0) return true;
            else return false;
        }
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int year;
    cin >> year;
    if(isLeapYear(year)) cout << "true" << endl;
    else cout << "false" << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}