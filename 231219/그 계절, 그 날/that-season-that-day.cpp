#include <iostream>
using namespace std;

bool isLeapYear(int y);
void Season(int y, int m, int d);
bool isExist(int y, int m, int d);

int main() {
    int Y, M, D;
    cin >> Y >> M >> D;
    Season(Y, M, D);
    // 여기에 코드를 작성해주세요.
    return 0;
}

bool isLeapYear(int y) {
    if (y % 4 == 0) {
        if (y % 100 == 0) {
            if (y % 400 == 0) return true;
            else return false;
        }
        else return true;
    }
    else return false;
}

bool isExist(int y, int m, int d){
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        if (d <= 31) return true;
    }
    else if (m == 2 || m == 4 || m == 6 || m == 9 || m == 11) {
        if (m == 2) {
            if(isLeapYear) {
                if (d <= 29) return true;
            }
            else {
                if (d <= 28) return true;
            }
        }
        else {
            if (d <= 30) return true;
        }
    }

    return false;
}

void Season(int y, int m, int d) {
    if (isExist(y, m, d)) {
        switch(m) {
            case 12:
            case 1:
            case 2: cout << "Winter" << endl; break;
            case 3:
            case 4:
            case 5: cout << "Spring" << endl; break;
            case 6:
            case 7:
            case 8: cout << "Summer" << endl; break;
            case 9:
            case 10:
            case 11: cout << "Fall" << endl; break;
        }
    }
    else cout << -1 << endl;
}