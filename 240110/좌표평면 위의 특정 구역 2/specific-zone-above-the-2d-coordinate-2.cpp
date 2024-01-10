#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int N, x, y;
	int minWidth = INT_MAX;
	cin >> N;
	vector<vector<int>> v(N, vector<int>(2, 0));

	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		v[i][0] = x;
		v[i][1] = y;
	}

	for (int i = 0; i < N; i++) { // i번째 점 제외하고 크기 계산
		int minX = INT_MAX, maxX = INT_MIN;
		int minY = INT_MAX, maxY = INT_MIN;
		for (int j = 0; j < N; j++) {
			if (i == j) continue; // i번째 점 제외
			// 최대 x, y 최소 x, y 좌표 구하기
			minX = min(minX, v[j][0]);
			maxX = max(maxX, v[j][0]);
			minY = min(minY, v[j][1]);
			maxY = max(maxY, v[j][1]);
		}
		minWidth = min(minWidth, ((maxX - minX) * (maxY - minY)));
	}
	cout << minWidth;

	return 0;
}