#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a = 3;
    int b = 5;
    int temp = 0;

    temp = a;
    a = b;
    b = temp;

    cout << a << "\n" << b << endl;
    
    return 0;
}