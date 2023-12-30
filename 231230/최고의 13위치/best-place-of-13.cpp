#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <climits>
using namespace std;

int main() {
	int N, e;
	int maxCnt = INT_MIN;
	cin >> N;
	vector<vector<int>> v(N, vector<int>(N, 0));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> v[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 2; j++) {
			maxCnt = max(maxCnt, v[i][j] + v[i][j + 1] + v[i][j + 2]);
		}
	}

	cout << maxCnt;	
}