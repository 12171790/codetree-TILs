#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>
using namespace std;

int arr[6];

int getSub(int i, int j, int k, int l) {
	int totalSum = 0;
	int minSum = 0;
	int maxSum = 0;
	for (int i = 0; i < 6; i++) totalSum += arr[i];

	int sumFirstGroup = arr[i] + arr[j];
	int sumSecondGroup = arr[k] + arr[l];
	int sumThirdGroup = totalSum - (sumFirstGroup + sumSecondGroup);

	minSum = min(sumFirstGroup, min(sumSecondGroup, sumThirdGroup));
	maxSum = max(sumFirstGroup, max(sumSecondGroup, sumThirdGroup));
	
	return maxSum - minSum;
}

int main() {
	int minSub = INT_MAX;
	int cnt = 0;
	for (int i = 0; i < 6; i++) cin >> arr[i];

	for (int i = 0; i < 6; i++) {
		for (int j = i + 1; j < 6; j++) {
			for (int k = 0; k < 6; k++) {
				for (int l = k + 1; l < 6; l++) {
					if (k == i || k == j || l == j || l == i) continue;
					minSub = min(minSub, getSub(i, j, k, l));
				}
			}
		}
	}
	cout << minSub << endl;
}