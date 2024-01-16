#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

bool cmp(pair<int, int>& v1, pair<int, int>& v2) {
	if (v1.first + v1.second == v2.first + v2.second) {
		return v1.first > v2.first;
	}
	else {
		return v1.first + v1.second < v2.first + v2.second;
	}
}

int main() {
	int N, B; // N명의 학생, B만큼의 예산
	int p, s; // 선물 가격 p, 배송비 s
	int cnt = 0; // 선물 가능한 학생 수
	int maxCnt = INT_MIN;
	int totalPrice = 0; // 총 선물 가격
	cin >> N >> B;
	vector<pair<int, int>> v;
	for (int i = 0; i < N; i++) {
		cin >> p >> s;
		v.emplace_back(make_pair(p, s));
	}

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j) 
				totalPrice += (v[j].first / 2) + v[j].second;
			else
				totalPrice += v[j].first + v[j].second;

			if (totalPrice > B) 
				break; // 예산 초과
			cnt++;
		}

		maxCnt = max(maxCnt, cnt);
		totalPrice = 0;
		cnt = 0;

	}
	cout << maxCnt;

	return 0;
}