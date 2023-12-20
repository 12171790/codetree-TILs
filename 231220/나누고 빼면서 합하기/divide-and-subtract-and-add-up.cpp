#include <iostream>
#include <vector>
using namespace std;

vector<int> ReturnIdxVector(vector<int> &arr, int m) {
    vector<int> target;
    target.reserve(arr.size());

    target.emplace_back(m);

    while (m != 1) {
        if (m % 2 == 0) {
            m /= 2;
            target.emplace_back(m);
        }
        else {
            m -= 1;
            target.emplace_back(m);
        }
    }
    target.shrink_to_fit();
    return target;
}

int SumOfElem(vector<int> &arr, int &m) {
    int sum = 0;
    vector<int> targetArr;
    targetArr = ReturnIdxVector(arr, m);
 
    for (int i = 0; i < targetArr.size(); i++) {
        sum += arr[targetArr[i] - 1];
    }

    return sum;
}

int main() {
    int n, m;
    int k = 0;
    cin >> n >> m;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        cin >> k;
        arr.emplace_back(k);
    }
    cout << SumOfElem(arr, m) << endl;

    return 0;
}