#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string str1, str2, str3;
    int num[3];
    int max;
    cin >> str1 >> str2 >> str3;
    num[0] = str1.length() - str2.length();
    num[1] = str2.length() - str3.length();
    num[2] = str1.length() - str3.length();
    num[0] = abs(num[0]);
    num[1] = abs(num[1]);
    num[2] = abs(num[2]);
    // num[0] = abs(str1.length() - str3.length());
    // num[1] = abs(str2.length() - str3.length());
    // num[2] = abs(str1.length() - str3.length());
    max = num[0];
    for (int i = 1; i < 3; i++) {
        if (num[i] > max) max = num[i];
    }
    cout << max << endl;
    return 0;
}