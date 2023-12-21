#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int FindMin(vector<int>& v) {
	sort(v.begin(), v.end());
	vector<int> sumV(v.size() / 2);
	for (int i = 0; i < sumV.size(); i++) {
		sumV[i] = v[i] + v[v.size() - 1 - i];
	}

	int max = sumV[0];
	if (sumV.size() == 1) return sumV[0];

	for (int i = 1; i < sumV.size(); i++) {
		if (sumV[i] > max) max = sumV[i];
	}
	return max;
}

int main() {
	int n, e;
	cin >> n;
	vector<vector<int>> twoDimVec(n, vector<int>(2));
	// vector를 n칸 만들고, 그 안에 vector를 2칸 만든다.
	// v[0] v[0][0] v[0][1]
	// v[1] v[1][0] v[1][1]
	// v[2] v[2][0] v[2][1]
	// ...
	// v[n-1] v[n-1][0] v[n-1][1]
	vector<int> v;
	for (int i = 0; i < 2 * n; i++) {
		cin >> e;
		v.emplace_back(e);
	}
	cout << FindMin(v) << endl;
}