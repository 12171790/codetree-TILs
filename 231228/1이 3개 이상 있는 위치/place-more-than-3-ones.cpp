#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool inRange(int x, int y, int n) {
	return (x >= 0 && x < n && y >= 0 && y < n);
}

int main() {
	int arr[100][100];
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	int dir = 0;
	// 동 남 서 북
	int dx[4] = { 1, 0, -1, 0 };
	int dy[4] = { 0, 1, 0, -1 };
	// 이동한 위치
	int nx = 0, ny = 0;
	// 상하좌우 1 개수
	int cnt = 0;
	// 상하좌우 1 개수가 3개 이상인 점
	int totalCnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < 4; k++) {
				nx = i + dx[k];
				ny = j + dy[k];
				if (inRange(nx, ny, n) && arr[nx][ny] == 1) cnt++;
			}
			if (cnt >= 3) totalCnt++;
			cnt = 0;
		}
	}
	cout << totalCnt;

	return 0;
}