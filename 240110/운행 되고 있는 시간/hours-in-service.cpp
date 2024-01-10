#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>

#define MAX_NUM 1001

using namespace std;

int main() {
	int N;
	int A, B;
	int maxTime = INT_MIN;
	int maxSub = INT_MIN;
	cin >> N;
	vector<vector<int>> v(N, vector<int>(2, 0));

	for (int i = 0; i < N; i++) {
		cin >> A >> B;
		v[i][0] = A;
		v[i][1] = B;
	}

	for (int i = 0; i < N; i++) {
		int arr[MAX_NUM] = { 0 };
		int minNum = INT_MAX;
		int cnt = 0;
		for (int j = 0; j < N; j++) {
			if (i == j) continue;

			for (int k = v[j][0]; k < v[i][1]; k++) {
				arr[k]++;
			}

			minNum = min(minNum, v[j][0]);
		}

		for (int j = minNum; j < MAX_NUM; j++) {
			if (arr[j] == 0) break;
			cnt++;
		}

		maxTime = max(maxTime, cnt);
	}

	cout << maxTime << endl;
	return 0;
}