#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

bool CheckSameArray(vector<int>& a, vector<int>& b) {
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	if (a.size() == b.size()) {
		for (int i = 0; i < a.size(); i++) {
			if (a[i] != b[i]) return false;
		}
		return true;
	}
	return false;
}

int main() {
	int n, e;
	vector<int> vecA;
	vector<int> vecB;
	cin >> n;
	vecA.reserve(n);
	vecB.reserve(n);

	for (int i = 0; i < n; i++) {
		cin >> e;
		vecA.emplace_back(e);
	}

	for (int i = 0; i < n; i++) {
		cin >> e;
		vecB.emplace_back(e);
	}

	if (CheckSameArray(vecA, vecB)) cout << "Yes" << endl;
	else cout << "No" << endl;
}