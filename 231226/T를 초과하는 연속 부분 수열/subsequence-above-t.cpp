#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, e, t;
	int max = 0, cnt = 0;
	vector<int> v;
	cin >> n >> t;
	v.reserve(n);
	for (int i = 0; i < n; i++) {
		cin >> e;
		v.emplace_back(e);
	}

	for (int i = 1; i < v.size(); i++) {
		if (v[i] > t && v[i - 1] > t) cnt++;
		else cnt = 0;

		if (cnt > max) 	max = cnt;
	}

	if (max == 0) cout << max;
	else cout << max + 1;
}