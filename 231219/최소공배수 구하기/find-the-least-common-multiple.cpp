#include <iostream>
using namespace std;

void Print(int n, int m) {
    int nNum = 2, mNum = 2;
    int nMul = n, mMul = m;
    for(;;) {
        if (nMul == mMul) break;
        else if (nMul > mMul) {
            mMul = m * mNum++;
        } else {
            nMul = n * nNum++;
        }
    }
    
    cout << nMul;
}

int main() {
    int n, m;
    cin >> n >> m;
    Print(n, m);
    // 여기에 코드를 작성해주세요.
    return 0;
}