#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
	int n;
	string str;
	cin >> n;
	vector<string> v;
	v.reserve(n);

	for (int i = 0; i < n; i++) {
		cin >> str;
		v.emplace_back(str);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		cout << v[i] << endl;
	}

	return 0;
}