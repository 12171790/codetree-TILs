#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

void NtoB(int num, int b) {
    vector<int> intV;

    while (true) {
        if (num < b) {
            intV.emplace_back(num);
            break;
        }

        intV.emplace_back(num % b);
        num /= b;
    }

    for (int i = intV.size() - 1; i >= 0; i--) {
        cout << intV[i];
    }
    cout << endl;
}

int NtoDec(string& s, int a) {
    int cnt = 0;
    int num = stoi(s);
    int decNum = 0;

    while (true) {
        if (num < 10) {
            decNum += num * pow(a, cnt);
            break;
        }

        decNum = decNum + ((num % 10) * pow(a, cnt++));
        num /= 10;
    }

    return decNum;
}


int main() {
    int a, b;
    string n;
    cin >> a >> b;
    cin >> n;

    NtoB(NtoDec(n, a), b);
}