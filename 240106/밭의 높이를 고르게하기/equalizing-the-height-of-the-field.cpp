#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <climits>
using namespace std;

int main() {

	int N, H, T; // N개의 밭, 연속하게 최소 T번 이상 H 높이로 나오게끔
	int minCost = INT_MAX;
	int cost = 0;
	int e;

	cin >> N >> H >> T;
	vector<int> v;

	for (int i = 0; i < N; i++) {
		cin >> e;
		v.emplace_back(e);
	}

	for (int i = 0; i <= v.size() - T; i++) {
		for (int j = 0; j < T; j++) {
			cost += abs(H - v[i + j]);
		}

		minCost = min(minCost, cost);
		cost = 0;
	}

	cout << minCost;
	

	return 0;
}