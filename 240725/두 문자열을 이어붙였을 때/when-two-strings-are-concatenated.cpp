#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    string ab, ba;
    cin >> a;
    cin >> b;
    
    ab = a + b;
    ba = b + a;

    if (ab.compare(ba) == 0) {
        cout << "true";
    } else {
        cout << "false";
    }


    return 0;
}