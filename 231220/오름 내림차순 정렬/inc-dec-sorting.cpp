#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
	int n, e;
	cin >> n;
	vector<int> v;
	v.reserve(n);
	for (int i = 0; i < n; i++) {
		cin >> e;
		v.emplace_back(e);
	}

	//오름차순 정렬
	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	sort(v.begin(), v.end(), greater<int>());

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}