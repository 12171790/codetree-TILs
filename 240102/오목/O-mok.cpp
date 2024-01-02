#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;

bool inRange(int r, int c) {
	return r >= 0 && r < 19 && c >= 0 && c < 19;
}

int main() {
	int e;
	int cnt = 0;
	//동쪽 기준 시계 방향
	int dr[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
	int dc[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };
	int dirNum = 0;
	int nr, nc;
	vector<vector<int>> v(19, vector<int>(19, 0));

	//검은색 1, 흰색 2
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[0].size(); j++) {
			cin >> v[i][j];
		}
	}

	for (int i = 0; i < v.size() - 4; i++) {
		for (int j = 0; j < v[0].size() - 4; j++) {
			if (v[i][j] == 1) {
				for (int k = 0; k < 8; k++) {
					dirNum = k;
					nr = i, nc = j;
					while (inRange(nr, nc) && v[nr + dr[dirNum]][nc + dc[dirNum]] == 1) {
						cnt++;
						nr += dr[dirNum], nc += dc[dirNum];
					}
					if (cnt == 4) {
						cout << 2 << endl;
						cout << nr + 1 - 2 * dr[dirNum] << " " << nc + 1 - 2 * dc[dirNum] << endl;
						return 0;
					}
					cnt = 0;
				}
			}
			else if (v[i][j] == 2) {
				for (int k = 0; k < 8; k++) {
					dirNum = k;
					nr = i, nc = j;
					while (inRange(nr, nc) && v[nr + dr[dirNum]][nc + dc[dirNum]] == 2) {
						cnt++;
						nr += dr[dirNum], nc += dc[dirNum];
					}
					if (cnt == 4) {
						cout << 2 << endl;
						cout << nr + 1 - 2 * dr[dirNum] << " " << nc + 1 - 2 * dc[dirNum] << endl;
						return 0;
					}
					cnt = 0;
				}
			}
		}
	}

	cout << 0 << endl;

	return 0;
}