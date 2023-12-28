#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool inRange(int x, int y, int n) {
	return (x >= 1 && x <= n && y >= 1 && y <= n);
}

int main() {
	int n, t;
	int r, c;
	char d;
	int dir = 0;
	// 동 남 북 서
	int dx[4] = { 1, 0, 0, -1 };
	int dy[4] = { 0, 1, -1, 0 };
	// 이동한 위치
	int nx = 0, ny = 0;

	cin >> n >> t;
	cin >> r >> c >> d;
	nx = c;
	ny = r;
	switch (d) {
	case 'U': dir = 2; break;
	case 'D': dir = 1; break;
	case 'R': dir = 0; break;
	case 'L': dir = 3; break;
	}

	for (int i = 0; i < t; i++) {
		nx = nx + dx[dir];
		ny = ny + dy[dir];

		if (!inRange(nx, ny, n)) {
			nx = nx - dx[dir];
			ny = ny - dy[dir];

			dir = 3 - dir;
		}
	}

	cout << ny << " " << nx;

	return 0;
}