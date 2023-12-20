#include <iostream>
#include <vector>
using namespace std;

int Find(vector<int>& v, int n, int num) {
    if (n == v.size()) {
        int a = v[0];
        int b = num;
        int cntA = 1, cntB = 1;
        while (a != b) {
            if (a > b) {
                b = num * cntB++;
            }
            else {
                a = v[v.size() - n] * cntA++;
            }
        }
        return a;
    }
    else {
        int a = v[v.size() - n];
        int b = num;
        int cntA = 1, cntB = 1;
        while (a != b) {
            if (a > b) {
                b = num * cntB++;
            }
            else {
                a = v[v.size() - n] * cntA++;
            }
        }
        return Find(v, ++n, a);
    }
}

int main() {
    int n, e;
    vector<int> v;
    cin >> n;
    v.reserve(n);
    
    for (int i = 0; i < n; i++) {
        cin >> e;
        v.emplace_back(e);
    }

    cout << Find(v, 2, v[v.size() - 1]);
    
    return 0;
}