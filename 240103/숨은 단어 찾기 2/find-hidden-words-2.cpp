#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;

int N, M;

bool inRange(int r, int c) {
	return r >= 0 && r < N && c >= 0 && c < M;
}

int main() {
	int e;
	int cntLEE = 0;
	int cnt = 0;
	//동쪽 기준 시계 방향
	int dr[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
	int dc[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };
	int dirNum = 0;
	int nr, nc;
	
	cin >> N >> M;
	vector<vector<char>> v(N, vector<char>(M, 0));

	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[0].size(); j++) {
			cin >> v[i][j];
		}
	}

	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[0].size(); j++) {
			if (v[i][j] == 'L') {
				for (int k = 0; k < 8; k++) {
					dirNum = k;
					nr = i, nc = j;
					while (inRange(nr + dr[dirNum], nc + dc[dirNum]) && v[nr + dr[dirNum]][nc + dc[dirNum]] == 'E') {
						cnt++;
						nr += dr[dirNum], nc += dc[dirNum];
						if (cnt == 2) {
							cntLEE++;
							break;
						}
					}
					cnt = 0;
				}
			}
		}
	}

	cout << cntLEE << endl;

	return 0;
}