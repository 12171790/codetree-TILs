#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int N, a, b, c; // N번에 걸쳐 a번 종이컵과 b번 종이컵을 교환한 뒤 c번 종이컵을 연다
	int maxCnt = INT_MIN;
	cin >> N;
	vector<vector<int>> v(N, vector<int>());	
	for (int i = 0; i < N; i++) {
		cin >> a >> b >> c;
		v[i].emplace_back(a);
		v[i].emplace_back(b);
		v[i].emplace_back(c);
	}

	for (int i = 1; i <= 3; i++) {
		int cnt = 0; // 조약돌을 맞춘 횟수
		int cup[4] = { 0 };
		cup[i] = 1; // 조약돌 위치;
		for (int j = 0; j < N; j++) {
			// a와 b 교환
			int temp = cup[v[j][0]];
			cup[v[j][0]] = cup[v[j][1]];
			cup[v[j][1]] = temp;

			// c컵 확인
			if (cup[v[j][2]] == 1) cnt++;
		}
		maxCnt = max(maxCnt, cnt);
	}

	cout << maxCnt;
}