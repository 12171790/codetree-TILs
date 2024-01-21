#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <climits>
using namespace std;

int main() {
	int N; // N개의 점
	int x, y; // 점의 위치 (x, y)
	int M = INT_MAX; // 가장 많은 수의 점이 있는 구역의 점의 개수 M개
	int maxCnt = 0;
	int arr[101][101] = { 0 };
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		arr[x][y] = 1; // 좌표평면 위에 점 기록
	}

	for (int i = 2; i < 100; i += 2) { // x축
		for (int j = 2; j < 100; j += 2) { // y축
			int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0; // 각 구역의 점의 개수

			for (int k = 0; k < i; k++) { 
				for (int l = 0; l < j; l++) { // 3구역
					if (arr[k][l] == 1) cnt3++;
				}
				for (int l = j; l < 101; l++) { // 1구역
					if (arr[k][l] == 1) cnt1++;
				}
			}

			for (int k = i; k < 101; k++) {
				for (int l = 0; l < j; l++) { // 4구역
					if (arr[k][l] == 1) cnt4++;
				}
				for (int l = j; l < 101; l++) { // 2구역
					if (arr[k][l] == 1) cnt2++;
				}
			}

			maxCnt = max(cnt1, max(cnt2, max(cnt3, cnt4)));
			M = min(M, maxCnt);
		}
	}

	cout << M << endl;

	return 0;
}