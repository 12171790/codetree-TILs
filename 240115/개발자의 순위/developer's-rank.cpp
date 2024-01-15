#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int K, N; // K번의 경기, N명의 개발자
	int e;
	int cnt = 0;
	cin >> K >> N;
	vector<vector<int>> kVector(K, vector<int>(N, 0));
	vector<vector<int>> ranking(N + 1, vector<int>(N + 1, 0));

	for (int i = 0; i < K; i++) {
		for (int j = 0; j < N; j++) {
			cin >> kVector[i][j];
		}
	}

	for (int i = 0; i < K; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				
				ranking[kVector[i][j]][kVector[i][k]]++;
			}
		}
	}

	for (int i = 0; i < N + 1; i++) {
		for (int j = 0; j < N + 1; j++) {
			if (ranking[i][j] == K) cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}