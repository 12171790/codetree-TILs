#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void PrintMiddleNumber(vector<int>& v) {
	for (int i = 1; i <= v.size(); i++) {
		if (i % 2 == 1) {
			sort(v.begin(), v.begin() + i);
			cout << v[i / 2] << " ";
		}
	}
	cout << endl;
}

int main() {
	int n, elem;
	vector<int> v;
	cin >> n;
	v.reserve(n);

	for (int i = 0; i < n; i++) {
		cin >> elem;
		v.emplace_back(elem);
	}

	PrintMiddleNumber(v);
}