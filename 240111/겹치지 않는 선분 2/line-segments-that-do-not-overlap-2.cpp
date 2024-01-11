#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>

#define OFFSET 1000000

using namespace std;

int main() {
	int N;
	int x1, x2;
	int cnt = 0;
	int arr[100] = { 0 };
	cin >> N;
	vector<vector<int>> v;

	for (int i = 0; i < N; i++) {
		vector<int> temp;
		cin >> x1 >> x2;
		temp.emplace_back(x1);
		temp.emplace_back(x2);
		v.emplace_back(temp);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j) continue;
			
			if (v[i][1] >= v[j][1] && v[i][0] <= v[j][0]) {
				arr[i] = 1;
				arr[j] = 1;
			}

		}
	}

	for (int i = 0; i < N; i++) {
		if (arr[i] == 0) cnt++;
	}
	
	cout << cnt << endl;

	return 0;
}