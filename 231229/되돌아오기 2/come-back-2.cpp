#include <iostream>
#include <string>
#include <vector>
using namespace std;

int ORDER_LENGTH = 100000;

int main() {
	char order; // 명령 L, R, F
	//북 동 남 서
	int dx[4] = { 0, 1, 0, -1 };
	int dy[4] = { 1, 0, -1, 0 };
	int dirNum = 0;
	int cntSecond = 0; // 초
	int nx = 0, ny = 0; // 현재 위치
	bool returnToPoint = false;


	while (ORDER_LENGTH) {
		cin >> order;

		if (order == 'L') {
			dirNum = (dirNum + 3) % 4;
		}
		else if (order == 'R') {
			dirNum = (dirNum + 1) % 4;
		}
		else if (order == 'F') {
			nx += dx[dirNum];
			ny += dy[dirNum];
		}
		cntSecond++;
		ORDER_LENGTH--;
		if (nx == 0 && ny == 0) {
			returnToPoint = true;
			break;
		}
	}


	if (returnToPoint) cout << cntSecond;
	else cout << -1;



	return 0;
}