#include <iostream>
using namespace std;

bool isPart(int* a, int aSize, int* b, int bSize) {
    int num = 0;
    for (int i = 0; i <= aSize - bSize; i++) {
        for (int j = 0; j < bSize; j++) {
            if (a[i + j] == b[j]) num++;
        }
        if (num == bSize) return true;
        else num = 0;
    }
    return false;
}

int main() {
    int* arrA;
    int* arrB;
    int n1, n2;
    cin >> n1 >> n2;
    arrA = new int [n1];
    arrB = new int [n2];

    for (int i = 0; i < n1; i++) {
        cin >> arrA[i];
    }
    for (int i = 0; i < n2; i++){
        cin >> arrB[i];
    }

    if (isPart(arrA, n1, arrB, n2)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}