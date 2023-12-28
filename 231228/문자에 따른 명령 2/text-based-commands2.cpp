#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string str;
	// 이동하는 방향 0 1 2 3 북 동 남 서
	int dir = 0;
	// 사용자 입력
	char input;
	//현재 위치 x, y
	int nx = 0, ny = 0;
	//북 동 남 서
	int dx[4] = { 0, 1, 0, -1 };
	int dy[4] = { 1, 0, -1, 0 };

	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		input = str[i];
		if (input == 'L') {
			dir = (dir + 3) % 4;
		}
		if (input == 'R') {
			dir = (dir + 1) % 4;
		}
		if (input == 'F') {
			nx = nx + dx[dir];
			ny = ny + dy[dir];
		}
	}

	cout << nx << " " << ny;

	return 0;
}