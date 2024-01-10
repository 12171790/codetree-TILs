#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

bool isParallelTri(vector<vector<int>>& v, int i, int j, int k) {
	if (v[i][0] == v[j][0] || v[i][0] == v[k][0] || v[j][0] == v[k][0]) {
		if (v[i][1] == v[j][1] || v[i][1] == v[k][1] || v[j][1] == v[k][1])
			return true;
	} 
	return false;
}

int getWidth(vector<vector<int>>& v, int i, int j, int k) {
	return ((v[i][0] * v[j][1] + v[j][0] * v[k][1] + v[k][0] * v[i][1]) -
		(v[j][0] * v[i][1] + v[k][0] * v[j][1] + v[i][0] * v[k][1])) / 2;
}

int main() {
	int N, x, y;
	int maxWidth = INT_MIN;
	int width = 0;
	cin >> N;
	vector<vector<int>> v(N, vector<int>(2, 0));

	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		v[i][0] = x;
		v[i][1] = y;
	}
	
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				if (isParallelTri(v, i, j, k)) {
					width = getWidth(v, i, j, k);
					maxWidth = max(maxWidth, width);
				}
			}
		}
	}
	cout << maxWidth * 2;

	// (2, 2), (2, 4), (4, 3)
	//

	return 0;
}