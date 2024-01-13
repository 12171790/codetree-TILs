#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <climits>
using namespace std;

void recordRanking(vector<vector<int>>& v, vector<vector<int>>& ranking, int i, int j, int k) {

	ranking[v[i][j]][v[j][k]]++;
}

int main() {
	int K, N; // ㅏ번의 경기, N명의 개발자
	int rank;
	int cnt = 0;
	cin >> K >> N;
	vector<vector<int>> v;
	vector<vector<int>> ranking(N + 1, vector<int>(N + 1, 0));

	for (int i = 0; i < K; i++) {
		vector<int> ele;
		for (int j = 0; j < N; j++) {
			cin >> rank;
			ele.emplace_back(rank);
		}
		v.emplace_back(ele);
	}

	for (int i = 0; i < K; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				recordRanking(v, ranking, i, j, k);
			}
		}
	}

	for (int i = 0; i < N + 1; i++) {
		for (int j = 0; j < N + 1; j++) {
			if (ranking[i][j] == K) cnt++;
		}
	}

	cout << cnt;

	return 0;
}