#include <iostream>
#include <vector>
using namespace std;

int FindMaxElem(vector<int>& v, int n) {
    if (n == 0) return v[0];

    return max(FindMaxElem(v, n - 1), v[n]);
}

int main() {
    int n, elem;
    cin >> n;
    vector<int> v;
    v.reserve(100);

    for (int i = 0; i < n; i++) {
        cin >> elem;
        v.emplace_back(elem);
    }

    cout << FindMaxElem(v, v.size() - 1);

    return 0;
}