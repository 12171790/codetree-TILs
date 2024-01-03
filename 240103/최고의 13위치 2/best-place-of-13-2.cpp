#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;

int N;

bool inRange(int r, int c) {
	return r >= 0 && r < N && c >= 0 && c < N;
}

int main() {
	int e;
	int cntCoin = 0;
	int maxCoin = INT_MIN;
	int j = 0;
	cin >> N;
	vector<vector<int>> v(N, vector<int>(N, 0));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> v[i][j];
		}
	}
	
	for (int i = 0; i < N; i++) {
		for (j = 0; j < N - 2; j++) {
			cntCoin = v[i][j] + v[i][j + 1] + v[i][j + 2];
		}
		for (int k = i; k < N; k++) {
			if (k == i) {
				for (int l = j + 3; l < N - 2; l++) {
					
					if (inRange(k, l + 2)) cntCoin += v[k][l] + v[k][l + 1] + v[k][l + 2];
				
					if (cntCoin > maxCoin) maxCoin = cntCoin;

					cntCoin = v[i][j] + v[i][j + 1] + v[i][j + 2];

				}
			}
			else {
				for (int l = 0; l < N - 2; l++) {
					
					cntCoin += v[k][l] + v[k][l + 1] + v[k][l + 2];

					if (cntCoin > maxCoin) maxCoin = cntCoin;

					cntCoin = v[i][j] + v[i][j + 1] + v[i][j + 2];
				}
			}
		}
	}

	cout << maxCoin << endl;

	return 0;
}