#include <iostream>
using namespace std;

class People{
public:
    int age;
    char gender;
};

int main() {
    People A;
    People B;

    cin >> A.age >> A.gender;
    cin >> B.age >> B.gender;

    if((A.age >= 19 && A.gender == 'M') || (B.age >= 19 && B.gender == 'M')) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}