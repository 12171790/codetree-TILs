#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

bool cmp(pair<int, int>& v1, pair<int, int>& v2) {
	return v1.second < v2.second;
}

int main() {
	int N, C, G, H; // N개의 장비, 작업량 (C, G, H)
	int Ta, Tb; // 선호하는 온도
	int maxWork = INT_MIN;
	int work = 0;
	vector<pair<int, int>> Temperature;

	cin >> N >> C >> G >> H;
	for (int i = 0; i < N; i++) {
		cin >> Ta >> Tb;
		Temperature.emplace_back(make_pair(Ta, Tb));
	}

	sort(Temperature.begin(), Temperature.end(), cmp);

	for (int i = 0; i <= Temperature[N - 1].second + 1; i++) {

		for (int j = 0; j < N; j++) {
			if (i > Temperature[j].second) work += H;
			else if (i >= Temperature[j].first) work += G;
			else work += C;
		}
		maxWork = max(maxWork, work);
		work = 0;
	}

	cout << maxWork;

	return 0;
}