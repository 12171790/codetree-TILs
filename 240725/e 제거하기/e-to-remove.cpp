#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    str.erase(str.begin() + str.find("e"));

    cout << str;
    
    return 0;
}