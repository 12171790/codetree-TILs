#include <iostream>
using namespace std;

int main() {
    string str;
    string order;
    cin >> str >> order;

    for (int i = 0; i < order.length(); i++) {
        if (order[i] == 'L') {
            str.push_back(str[0]);
            str.erase(str.begin());
        } else if (order[i] == 'R') {
            char temp = str[str.length() - 1];
            string tempStr;
            for (int j = 0; j < str.length() - 1; j++) {
                tempStr.push_back(str[j]);
            }
            str[0] = temp;
            str.replace(1, tempStr.length(), tempStr);
        }
    }

    cout << str;
    return 0;
}