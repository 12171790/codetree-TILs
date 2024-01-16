#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int X, Y; // 두 개의 숫자 X, Y;
	int maxSum = INT_MIN;
	cin >> X >> Y;
	for (int i = X; i <= Y; i++) {
		int d1 = i / 10000; // 만의 자리
		int d2 = (i / 1000) % 10; // 천의 자리
		int d3 = (i / 100) % 10; // 백의 자리
		int d4 = (i / 10) % 10; // 십의 자리
		int d5 = i % 10; // 일의 자리

		maxSum = max(maxSum, d1 + d2 + d3 + d4 + d5);
	}

	cout << maxSum;

	return 0;
}