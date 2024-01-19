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
	int cup[4] = { 0 };
	int maxCnt = INT_MIN;
	cin >> N;
	for (int i = 1; i <= 3; i++) {
		int cnt = 0; // 조약돌을 맞춘 횟수
		cup[i] = 1; // 조약돌 위치;
		for (int i = 0; i < N; i++) {
			cin >> a >> b >> c;

			// a와 b 교환
			int temp = cup[a];
			cup[a] = cup[b];
			cup[b] = temp;

			// c컵 확인
			if (cup[c] == 1) cnt++;
		}

		maxCnt = max(maxCnt, cnt);
	}

	cout << maxCnt;
}