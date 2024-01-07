#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <climits>
using namespace std;

vector<int> v;

int GetDiff(int i, int j, int k) {
	int sum1 = v[i] + v[j] + v[k];
	int sum2 = 0;
	for (int m = 0; m < v.size(); m++) sum2 += v[m];

	sum2 -= sum1;

	return abs(sum1 - sum2);
}

int main() {
	int ele;
	int minDiff = INT_MAX;

	for (int i = 0; i < 6; i++) {
        cin >> ele;
		v.emplace_back(ele);
	}

	for (int i = 0; i < v.size() - 2; i++) {
		for (int j = i + 1; j < v.size() - 1; j++) {
			for (int k = j + 1; k < v.size(); k++) {
				minDiff = min(minDiff, GetDiff(i, j, k));
			}
		}
	}

	cout << minDiff << endl;

	return 0;
}