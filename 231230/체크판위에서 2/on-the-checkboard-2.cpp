#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <climits>
using namespace std;

int main() {
	int R, C;
	int cnt = 0;
	int routeCnt = 0;
	char color;
	cin >> R >> C;
	vector<vector<char>> v(R, vector<char>(C, 0));

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cin >> v[i][j];
		}
	}
	color = v[0][0]; //시작 지점 색 저장
	for (int i = 1; i < R; i++) {
		for (int j = 1; j < C; j++) {
			if (v[i][j] != color) {
				color = v[i][j];

				for (int k = i + 1; k < R - 1; k++) {
					for (int l = j + 1; l < C - 1; l++) {
						if (v[k][l] != color) {
							routeCnt++;
						}
					}
				}

				color = v[0][0];
			}
		}
	}

	if (v[0][0] == v[R - 1][C - 1]) cout << 0;
	else cout << routeCnt;
}