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
	//오른쪽 대각선 아래
	int dr[3] = { 0, 1, 1 };
	int dc[3] = { 1, 1, 0 };
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
				for (int k = 0; k < 3; k++) {
					dirNum = k;
					nr = i, nc = j;
					while (v[nr][nc] == 1) {
						cnt++;
						nr += dr[dirNum], nc += dc[dirNum];
					}
					if (cnt == 5) {
						cout << 1 << endl;
						switch (dirNum) {
						case 0:
							cout << nr + 1 << " " << nc - 2 << endl; break;
						case 1:
							cout << nr - 2 << " " << nc - 2 << endl; break;
						case 2:
							cout << nr - 2 << " " << nc + 1 << endl; break;
						}
						return 0;
					}
					cnt = 0;
				}
			}
			else if (v[i][j] == 2) {
				for (int k = 0; k < 3; k++) {
					dirNum = k;
					nr = i, nc = j;
					while (v[nr][nc] == 2) {
						cnt++;
						nr += dr[dirNum], nc += dc[dirNum];
					}
					if (cnt == 5) {
						cout << 2 << endl;
						switch (dirNum) {
						case 0:
							cout << nr + 1 << " " << nc - 2 << endl; break;
						case 1:
							cout << nr - 2 << " " << nc - 2 << endl; break;
						case 2:
							cout << nr - 2 << " " << nc + 1 << endl; break;
						}
						return 0;
					}
					cnt = 0;
				}
			}
		}
	}

	return 0;
}