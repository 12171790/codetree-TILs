#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main() {
	int N, e;
	int maxSum = INT_MIN;
	int divSum = 0;
	int sum = 0;
	int firstNum, secondNum, thirdNum;
	bool carry = false;
	vector<int> v;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> e;
		v.emplace_back(e);
	}

	for (int i = 0; i < v.size() - 2; i++) {
		for (int j = i + 1; j < v.size() - 1; j++) {
			for (int k = j + 1; k < v.size(); k++) {
				firstNum = v[i], secondNum = v[j], thirdNum = v[k];
				while (firstNum && secondNum && thirdNum) {
					divSum = (firstNum % 10) + (secondNum % 10) + (thirdNum % 10);
					firstNum /= 10, secondNum /= 10, thirdNum /= 10;

					if (divSum >= 10) {
						carry = true;
						break;
					}
				}

				sum = v[i] + v[j] + v[k];
				if (!carry) {
					maxSum = max(maxSum, sum);
				}
				carry = false;
			}
		}
	}

	cout << maxSum;

	return 0;
}