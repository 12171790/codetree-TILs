#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int divi(int a, int b) {
    return a / b;
}
int mul(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2, result;
    char oper;
    cin >> num1 >> oper >> num2;

    switch(oper) {
        case '+': result = add(num1, num2); break;
        case '-': result = sub(num1, num2); break;
        case '/': result = divi(num1, num2); break;
        case '*': result = mul(num1, num2); break;
        default: cout << false; return 0;
    }
    cout << num1 << " " << oper << " " << num2 << " = " << result << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}