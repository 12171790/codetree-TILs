#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char firstAlp, secondAlp;
    bool firstArr[20] = {false};
    bool secondArr[20] = {false};
    cin >> str;
    firstAlp = str[0];
    secondAlp = str[1];

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == str[0]) firstArr[i] = true;
    }
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == str[1]) secondArr[i] = true;
    }
    //자기 자신은 제외
    //firstArr[0] = secondArr[1] = false;
    
    for (int i = 0; i < str.length(); i++) {
        if (firstArr[i]) str[i] = secondAlp;
        if (secondArr[i]) str[i] = firstAlp;
    }

    cout << str;
    return 0;
}