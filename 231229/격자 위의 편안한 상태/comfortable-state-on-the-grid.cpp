#include <iostream>
#include <string>
#include <vector>
using namespace std;

int ORDER_LENGTH = 100000;

bool InRange(int r, int c, int n) {
	return r >= 1 && r <= n && c >= 1 && c <= n;
}

int main() {
	int N; //격자 크기
	int M; //색칠 횟수
	int r = 0, c = 0;//행과 열
	int cnt = 0; //색칠된 칸
	//북 동 남 서
	int dr[4] = { -1, 0, 1, 0 };
	int dc[4] = { 0, 1, 0, -1 };

	cin >> N >> M;
	vector<vector<int>> v(N + 1, vector<int>(N + 1, 0));

	for (int i = 0; i < M; i++) {
		cin >> r >> c;

		v[r][c] = 1;
		for (int j = 0; j < 4; j++) {
			if (InRange(r + dr[j], c + dc[j], N) && v[r + dr[j]][c + dc[j]] == 1) cnt++;
		}

		if (cnt == 3) cout << 1 << endl;
		else cout << 0 << endl;

		cnt = 0;
	}

	return 0;
}