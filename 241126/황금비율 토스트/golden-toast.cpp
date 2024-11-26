#include <iostream>
#include <list>
using namespace std;

int main() {
    int n = 0, m = 0;
    string str;

    cin >> n >> m;
    cin >> str;

    list<char> li;
    for (auto ch : str) {
        li.push_back(ch);
    }
    list<char>::iterator it = li.end();

    for (int i = 0; i < m; i++) {
        char order = 0;
        cin >> order;

        if (order == 'L') {

            if (it == li.begin()) continue;
            it--;

        } else if (order == 'R') {

            if (it == li.end()) continue;
            it++;

        } else if (order == 'D') {

            if (it == li.end()) continue;
            it = li.erase(it);

        } else if (order == 'P') {

            char addChar = 0;
            cin >> addChar;
            li.insert(it, addChar);

        }
    }
    
    for (auto it = li.begin(); it != li.end(); it++) {
        cout << *it;
    }
    cout << endl;
    
    return 0;
}