#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int N, x, y;
	int minDist = INT_MAX;
	int dist = 0;
	cin >> N;
	vector<vector<int>> v(N, vector<int>(2, 0));

	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		v[i][0] = x;
		v[i][1] = y;
	}
	
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			dist = (pow(abs(v[i][0] - v[j][0]), 2) + pow(abs(v[i][1] - v[j][1]), 2));

			minDist = min(minDist, dist);
		}
	}
	
	cout << minDist;

	return 0;
}