#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n;
	int x;
	char dir;
	vector<int> xVec;
	vector<char> dirVec;
	int dirNum = 0;
	int cnt = 0;
	// 동 남 서 북
	int dc[4] = { 1, 0, -1, 0 };
	int dr[4] = { 0, 1, 0, -1 };
	// 이동한 위치
	int nc = 0, nr = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> dir >> x;
		dirVec.emplace_back(dir);
		xVec.emplace_back(x);
	}

	for (int i = 0; i < n; i++) {
		switch (dirVec[i]) {
		case 'E': dirNum = 0; break;
		case 'S': dirNum = 1; break;
		case 'W': dirNum = 2; break;
		case 'N': dirNum = 3; break;
		}

		for (int j = 0; j < xVec[i]; j++) {
			nc += dc[dirNum];
			nr += dr[dirNum];
			cnt++;

			if (nc == 0 && nr == 0) {
				cout << cnt;
				return 0;
			}
		}
	}

	return 0;
}