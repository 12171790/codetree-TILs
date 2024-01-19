#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int n, e; // n개의 숫자, 원소 e
	vector<int> v;
	int subSumMin = INT_MAX;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> e;
		v.emplace_back(e);
	}

	for (int i = 0; i < n; i++) {
		v[i] *= 2; // 하나의 숫자를 선택해서 2배

		for (int j = 0; j < n; j++) {
			vector<int> temp;
			int subSum = 0;
			for (int k = 0; k < n; k++) {
				if (k == j) continue; // 하나의 숫자를 선택해서 제거
				temp.emplace_back(v[k]);
			}
			for (int k = 0; k < temp.size() - 1; k++) {
				subSum += abs(temp[k] - temp[k + 1]);
			}

			subSumMin = min(subSumMin, subSum);
		}

		v[i] /= 2;
	}

	cout << subSumMin;
}