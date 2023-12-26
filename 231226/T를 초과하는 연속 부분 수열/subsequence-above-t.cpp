#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main() {
	int n, t, e;
	bool isThereBigNumber = false;
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
        
		if (v[i] > t) isThereBigNumber = true;

		if (cnt > max) max = cnt;
	}

	if (isThereBigNumber) {
		cout << max + 1;
	}
	else {
		cout << 0;
	}
}