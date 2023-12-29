#include <iostream>
#include <string>
#include <vector>
using namespace std;

int ORDER_LENGTH = 100000;
//서 북 동 남
int dr[4] = { 0, -1, 0, 1 };
int dc[4] = { -1, 0, 1, 0 };
int n; // n * n 크기의 직사각형

bool InRange(int r, int c) {
	return r >= 0 && r < n && c >= 0 && c < n;
}

void FillVector(vector<vector<int>>& v) {

	int cnt = n * n;
	int nr = n - 1, nc = n - 1;
	int dirNum = 0;

	while (cnt > 0) {

		if (InRange(nr, nc) && v[nr][nc] == 0) {
			v[nr][nc] = cnt--;
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

	cin >> n;
	
	vector<vector<int>> v(n, vector<int>(n, 0));

	FillVector(v);

	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[0].size(); j++) {
			cout << v[i][j]<< " ";
		}
		cout << endl;
	}
}