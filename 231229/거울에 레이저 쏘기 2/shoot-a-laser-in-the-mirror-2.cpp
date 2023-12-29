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
	int K; //레이저 쏘는 위치
	// 레이저가 오는 방향에 따른 레이저 위치 변화 위 오른쪽 왼쪽 아래
	int dr[4] = { 0, 1, -1, 0 };
	int dc[4] = { -1, 0, 0, 1 };

	int nr = 0, nc = 0; //레이저의 위치
	int dirNum = 0;//레이저가 오는 방향
	int cnt = 0; //반사된 횟수
	string infoOfMi; //거울 정보

	cin >> N;

	vector<vector<int>> v(N + 1, vector<int>(N + 1, 0));

	for (int i = 1; i <= N; i++) {
		cin >> infoOfMi;
		// /면 1 \이면 -1
		for (int j = 0; j < N; j++) {
			switch (infoOfMi[j]) {
			case '/': v[i][j + 1] = 1; break;
			case '\\': v[i][j + 1] = -1; break;
			}
		}
	}

	cin >> K; //레이저 쏘는 위치 입력

	//시작 위치 지정
	switch ((K - 1) / N) {
	case 0: nr = 1; nc = K; dirNum = 0;  break; //위
	case 1: nr = K - N; nc = N; dirNum = 1; break; //오른쪽
	case 2: nr = N; nc = (N + 1) - (K - 2 * N); dirNum = 3; break; //아래
	case 3: nr = (N + 1) - (K - 3 * N); nc = 1; dirNum = 2; break; //왼쪽
	}

	while (InRange(nr, nc, N)) {
		if (v[nr][nc] == 1) {// /일 때
			nr += dr[dirNum];
			nc += dc[dirNum];
			switch (dirNum) {
			case 0: dirNum = 1; break;
			case 1: dirNum = 0; break;
			case 2: dirNum = 3; break;
			case 3: dirNum = 2; break;
			}
			//오른쪽 -> 위
			//위 -> 오른쪽
			//왼쪽 -> 아래
			//아래 -> 왼쪽
		}
		else if (v[nr][nc] == -1) {// \일 때
			nr += dr[3 - dirNum];
			nc += dc[3 - dirNum];
			switch (dirNum) {
			case 0: dirNum = 2; break;
			case 1: dirNum = 3; break;
			case 2: dirNum = 0; break;
			case 3: dirNum = 1; break;
			}
			//오른쪽 -> 아래
			//아래 -> 오른쪽
			//왼쪽 -> 위
			//위 -> 왼쪽
		}
		cnt++;
	}

	cout << cnt;

	return 0;
}