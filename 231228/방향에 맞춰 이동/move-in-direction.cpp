#include <iostream>
#include <vector>
using namespace std;

int main() {
	// 총 N번 이동
	int N;
	// 이동하는 방향
	char direction;
	// 이동거리
	int x;
	//현재 위치 x, y
	int position[2] = { 0 };
	//서 남 북 동
	int dx[4] = { -1, 0, 0, 1 };
	int dy[4] = { 0, -1, 1, 0 };

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> direction >> x;

		switch (direction) {
		case 'W': position[0] += dx[0] * x; position[1] += dy[0] * x; break;
		case 'S': position[0] += dx[1] * x; position[1] += dy[1] * x; break;
		case 'N': position[0] += dx[2] * x; position[1] += dy[2] * x; break;
		case 'E': position[0] += dx[3] * x; position[1] += dy[3] * x; break;
		}
	}

	cout << position[0] << " " << position[1] << endl;


	return 0;
}