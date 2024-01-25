#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int n; // 1 이상 n 이하의 숫자로만
	int a, b;// 숫자쌍
	int m; // 숫자쌍 m개
	int maxPairCount = INT_MIN;
	cin >> n >> m;
	vector<pair<int, int>> v;

	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		v.emplace_back(make_pair(a, b));
	}

	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			int pairCount = 0;
			for (int k = 0; k < m; k++) {
				if ((v[k].first == i && v[k].second == j) || (v[k].first == j && v[k].second == i)) {
					pairCount++;
				}
			}

			maxPairCount = max(maxPairCount, pairCount);
		}
	}

	cout << maxPairCount << endl;
}