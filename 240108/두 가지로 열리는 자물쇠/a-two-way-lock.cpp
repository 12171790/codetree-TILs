#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <climits>
using namespace std;

int main() {
	int N;
	int abc1[3];
	int abc2[3];
	int index = 0;
	int keyNumber1[3][5] = { 0 };
	int keyNumber2[3][5] = { 0 };

	int cntArr1[3] = { 0 };
	int cntArr2[3] = { 0 };

	int dupCnt[3] = { 0 };

	cin >> N;

	for (int i = 0; i < 3; i++) cin >> abc1[i];
	for (int i = 0; i < 3; i++) cin >> abc2[i];

	for (int i = 0; i < 3; i++) {
		for (int j = 1; j <= N; j++) {
			if (abs(abc1[i] - j) <= 2 || abs(abc1[i] - j) >= (N - 2)) {
				keyNumber1[i][index++] = j;
				cntArr1[i]++;
			}
		}
        index = 0;
	}

    for (int i = 0; i < 3; i++) {
        for (int j = 1; j <= N; j++) {
            if (abs(abc2[i] - j) <= 2 || abs(abc2[i] - j) >= (N - 2)) {
				keyNumber2[i][index++] = j;
				cntArr2[i]++;
			}
        }
        index = 0;
    }


	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			for (int k = 0; k < 5; k++) {
				if (keyNumber1[i][j] == keyNumber2[i][k] && keyNumber1[i][j != 0]) dupCnt[i]++;
			}
		}
	}

	int totalCount1 = cntArr1[0] * cntArr1[1] * cntArr1[2];
	int totalCount2 = cntArr2[0] * cntArr2[1] * cntArr2[2];
	int dupCount = dupCnt[0] * dupCnt[1] * dupCnt[2];
	
	cout << totalCount1 + totalCount2 - dupCount << endl;

	return 0;
}