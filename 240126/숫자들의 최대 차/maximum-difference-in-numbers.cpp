#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int e, N, K; // 원소의 개수 N, 최대로 차이날 수 있는 값 K
	int maxCnt = INT_MIN; // 최대로 뽑을 수 있는 숫자 수
	vector<int> v;
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> e;
		v.emplace_back(e);
	}

	for (int i = 0; i < N; i++) {
		int cnt = 0; // 뽑을 수 있는 숫자 수
		for (int j = 0; j < N; j++) {
			if (i == j) continue;

			if (abs(v[i] - v[j]) <= K) cnt++;
		}

		maxCnt = max(maxCnt, cnt);
	}
	cout << maxCnt;
}