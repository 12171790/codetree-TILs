#include <iostream>
#include <list>
using namespace std;

int main() {
    int n = 0, m = 0;
    string str;

    cin >> n >> m;
    cin >> str;

    string::iterator it = str.end();

    for (int i = 0; i < m; i++) {
        char order = 0;
        cin >> order;

        if (order == 'L') {

            if (it == str.begin()) continue;
            it--;

        } else if (order == 'R') {

            if (it == str.end()) continue;
            it++;

        } else if (order == 'D') {

            if (it == str.end()) continue;
            it = str.erase(it);

        } else if (order == 'P') {

            char addChar = 0;
            cin >> addChar;
            str.insert(it, addChar);
            it++;

        }
    }

    cout << str << endl;
    
    return 0;
}