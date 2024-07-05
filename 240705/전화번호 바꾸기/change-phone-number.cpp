#include <iostream>
#include <string>
using namespace std;

int main() {
    string phone;
    cin >> phone;

    string temp = phone.substr(4, 4);
    
    phone.replace(4, 4, phone.substr(9, 4));

    phone.replace(9, 4, temp);

    cout << phone;

    return 0;
}