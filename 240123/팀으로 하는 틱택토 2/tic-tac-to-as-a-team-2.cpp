#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

bool isTicTacToeAsTeam(int a, int b, int c) {
	if (a == b) {
		if (a != c) {
			return true;
		}
	}
	else if (a == c) {
		if (a != b) {
			return true;
		}
	}
	else if (b == c) {
		if (b != a) {
			return true;
		}
	}

	return false;
}

int main() {
	int arr[3][3] = { 0 };
    int ele;
	int cnt = 0;

	for (int i = 0; i < 3; i++) {
		cin >> ele;
		arr[i][0] = ele / 100;
		arr[i][1] = (ele / 10) % 10;
		arr[i][2] = ele % 10;
	}

	// 가로 방향 확인
	for (int i = 0; i < 3; i++) {
		if (isTicTacToeAsTeam(arr[i][0], arr[i][1], arr[i][2])) cnt++;
	}

	// 세로 방향 확인
	for (int i = 0; i < 3; i++) {
		if (isTicTacToeAsTeam(arr[0][i], arr[1][i], arr[2][i])) cnt++;
	}

	// 대각선 방향 확인
	if (isTicTacToeAsTeam(arr[0][0], arr[1][1], arr[2][2])) cnt++;
	if (isTicTacToeAsTeam(arr[2][0], arr[1][1], arr[0][2])) cnt++;

	cout << cnt << endl;

}