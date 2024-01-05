#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;

int N, K;
const int OFFSET = 200;

bool inRange(int index) {
	return index >= 0 && index < 401;
}

int main() {
	int candySum = 0;
	int maxCandy = INT_MIN;
	int index, ele;
	cin >> N >> K;
	vector<int> A(401, 0);

	for (int i = 0; i < N; i++) {
		cin >> ele >> index;
		A[index] += ele;
	}

	for (int c = K; c <= A.size() - K; c++) {

		for (int i = c - K; i <= c + K; i++) {
			if (inRange(i)) candySum += A[i];
		}

		maxCandy = max(maxCandy, candySum);

		candySum = 0;

	}

	cout << maxCandy << endl;
}