#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {

    if (b == 0) return a;
    
    return gcd(b, a % b);
}

int Find(vector<int>& v, int n) {

    if (n == 1) return (v[1] * v[0]) / gcd(v[1], v[0]);

    return (v[n] * Find(v, n - 1)) / gcd(v[n], Find(v, n - 1));
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
    if (n <= 1) cout << v[0];
    else cout << Find(v, v.size() - 1);
    return 0;
}