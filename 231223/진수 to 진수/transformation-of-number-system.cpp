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

    for (int i = 0; i < intV.size(); i++) {
        cout << intV[i];
    }
    cout << endl;
}

int NtoA(string& s, int a) {
    int num = 0;
    int dec = stoi(s);
    int cnt = 0;
    for (int i = s.length() - 1; i >= 0; i--) {
        num += (dec % 10) * pow(a, cnt++);
        dec /= 10;
    }

    return num;
}


int main() {
    int a, b;
    string n;
    cin >> a >> b;
    cin >> n;

    NtoB(NtoA(n, a), b);
}