#include <iostream>
#include <string>
#include <vector>
using namespace std;

int ORDER_LENGTH = 100000;
//남 동 북 서
int dr[4] = { 1, 0, -1, 0 };
int dc[4] = { 0, 1, 0, -1 };
int n, m; // n * m 크기의 직사각형

bool InRange(int r, int c) {
	return r >= 0 && r < n && c >= 0 && c < m;
}

void FillVector(vector<vector<int>>& v) {
	int cnt = 1;
	int nr = 0, nc = 0;
	int dirNum = 0;

	while (v.size() * v[0].size() >= cnt) {

		if (InRange(nr, nc) && v[nr][nc] == 0) {
			v[nr][nc] = cnt++;
		}
		else {
			nr -= dr[dirNum];
			nc -= dc[dirNum];
			dirNum = (dirNum + 1) % 4;
		}

		nr += dr[dirNum];
		nc += dc[dirNum];

	}
}

int main() {

	cin >> n >> m;
	
	vector<vector<int>> v(n, vector<int>(m, 0));

	FillVector(v);

	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[0].size(); j++) {
			cout << v[i][j]<< " ";
		}
		cout << endl;
	}
}