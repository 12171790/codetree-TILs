#include <iostream>
#include <string>
#include <vector>
using namespace std;

int ORDER_LENGTH = 100000;
//북 동 남 서
int dr[4] = { -1, 0, 1, 0 };
int dc[4] = { 0, 1, 0, -1 };
int n; // n * n 크기의 정사각형
int dirNum = 0;

bool InRange(int r, int c) {
	return r >= 0 && r < n && c >= 0 && c < n;
}

int move(vector<vector<int>>& v, string& order) {
	int nr = n / 2;
	int nc = n / 2;
	int sum = v[nr][nc];

	for (int i = 0; i < order.length(); i++) {

		if (order[i] == 'L') {
			dirNum = (dirNum + 3) % 4;
		}
		else if (order[i] == 'R') {
			dirNum = (dirNum + 1) % 4;
		}
		else if (order[i] == 'F' && InRange(nr + dr[dirNum], nc + dc[dirNum])) {
			nr += dr[dirNum];
			nc += dc[dirNum];

			sum += v[nr][nc];
		}
	}
	return sum;
}

int main() {
	string order = "";
	int t; //명령 개수
	cin >> n >> t;
	cin >> order;
	
	vector<vector<int>> v(n, vector<int>(n, 0));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> v[i][j];
		}
	}
	
	cout << move(v, order);
	
}