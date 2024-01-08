#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {

	int N;
	int index = 0;
	int abc1[3];
	int abc2[3];
	int keyNumber1[3][5];
	int keyNumber2[3][5];
	int dupNum[3] = { 0 };


	cin >> N;

	for (int i = 0; i < 3; i++) {
		cin >> abc1[i];
	}

	for (int i = 0; i < 3; i++) {
		cin >> abc2[i];
	}
	
	for (int i = 0; i < 3; i++) {
		for (int j = 1; j <= N; j++) {
			if (abs(abc1[i] - j) >= (N - 2) || abs(abc1[i] - j) <= 2) {
				keyNumber1[i][index++] = j;
			}
		}
		index = 0;
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 1; j <= N; j++) {
			if (abs(abc2[i] - j) >= (N - 2) || abs(abc2[i] - j) <= 2) {
				keyNumber2[i][index++] = j;
			}
		}
		index = 0;
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			for (int k = 0; k < 5; k++) {
				if (keyNumber1[i][j] == keyNumber2[i][k]) dupNum[i]++;
			}
		}
	}

	int totalNum = pow(5, 3) * 2;
	int dupTotalNum = 1;
	for (int i = 0; i < 3; i++) {
		dupTotalNum *= dupNum[i];
	}

	cout << totalNum - dupTotalNum << endl;
	
}