#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main() {
	int e, n, k;
	int sum = 0;
	int maxSum = INT_MIN;
	vector<int> v;
	
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> e;
		v.emplace_back(e);
	}

	for (int i = 0; i <= n - k; i++) {
		for (int j = i; j < i + k; j++) {
			sum += v[j];
		}

		if (sum > maxSum) maxSum = sum;
		sum = 0;
	}

	cout << maxSum;

	return 0;
}