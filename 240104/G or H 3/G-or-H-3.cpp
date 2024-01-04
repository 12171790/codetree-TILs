#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main() {
	int index, n, k;
	char GorH;
	int sum = 0;
	int maxSum = INT_MIN;
	vector<int> v(10001, 0);
	
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> index >> GorH;
		
		if (GorH == 'G') v[index] = 1;
		else if (GorH == 'H') v[index] = 2;
	}

	for (int i = 1; i < v.size() - k; i++) {
		for (int j = i; j <= i + k; j++) {
			sum += v[j];
		}

		maxSum = max(maxSum, sum);
		sum = 0;
	}

	cout << maxSum;

	return 0;
}