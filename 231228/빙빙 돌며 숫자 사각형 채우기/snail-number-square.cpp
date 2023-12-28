#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool inRange(int r, int c, int n, int m) {
	return (r >= 0 && r < n && c >= 0 && c < m);
}

int main() {
	int arr[100][100] = { 0 };
	int n, m;
	int dir = 0;
	int cnt = 1;
	// 동 남 서 북
	int dc[4] = { 1, 0, -1, 0 };
	int dr[4] = { 0, 1, 0, -1 };
	// 이동한 위치
	int r = 0, c = 0;

	cin >> n >> m;

	while (cnt <= (n * m)) {
		if (!inRange(r, c, n, m) || arr[r][c] != 0) {
			r -= dr[dir];
			c -= dc[dir];
			dir = (dir + 1) % 4;
		}
		else arr[r][c] = cnt++;

		r += dr[dir];
		c += dc[dir];
	}
 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}