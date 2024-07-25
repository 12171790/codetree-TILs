#include <iostream>
#include <vector>
using namespace std;

int main() {
    string str;
    vector<char> v1;
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        if(i % 2 == 1) {
            v1.emplace_back(str[i]);
        }
    }

    for (int i = v1.size() - 1; i >= 0; i--) {
        cout << v1[i];
    }
    return 0;
}