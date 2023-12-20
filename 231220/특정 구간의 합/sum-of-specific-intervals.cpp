#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;

int SumA1toA2(int& a1, int& a2) {
    int sum = 0;
    for (int i = a1 - 1; i < a2; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int n, m, ele;
    int a1, a2;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> ele;
        arr.emplace_back(ele);
    }

    for (int i = 0; i < m; i++) {
        cin >> a1 >> a2;
        cout << SumA1toA2(a1, a2) << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}