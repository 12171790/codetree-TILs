#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int N, K; // 폭탄 N개, 특정 거리 K
	int e;
	int max_num = -1;
	vector<int> v;
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> e;
		v.emplace_back(e);
	}

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j <= K + i; j++) {
			if (j >= N) break; // index 범위 벗어나지 않도록

			if (v[i] == v[j]) max_num = max(max_num, v[i]);
		}
	}

	cout << max_num;
	return 0;
}