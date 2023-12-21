#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int NumberK(vector<int>& v,int k) {
	sort(v.begin(), v.end());

	return v[k - 1];
}

int main() {
	int n, e, k;
	cin >> n >> k;
	vector<int> v;
	v.reserve(n);
	for (int i = 0; i < n; i++) {
		cin >> e;
		v.emplace_back(e);
	}

	cout << NumberK(v, k);
}