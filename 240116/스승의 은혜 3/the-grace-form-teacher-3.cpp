#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int N, B; // N명의 학생, B만큼의 예산
	int p, s; // 선물 가격 p, 배송비 s
	int cnt = 0; // 선물 가능한 학생 수
	int maxCnt = INT_MIN;
	int totalPrice = 0; // 총 선물 가격
	cin >> N >> B;
	vector<vector<int>> v(N, vector<int>(2, 0));
	for (int i = 0; i < N; i++) {
		cin >> p >> s;
		v[i][0] = p, v[i][1] = s;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j) 
				totalPrice += (v[j][0] / 2) + v[j][1];
			else
				totalPrice += v[j][0] + v[j][1];

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