#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>

#define MAX_NUM 5

using namespace std;

int n = MAX_NUM;
int arr[MAX_NUM];

int getSub(int i, int j, int k, int l) {
	int totalSum = 0;
	int minSum = 0;
	int maxSum = 0;
	for (int i = 0; i < n; i++) totalSum += arr[i];

	int sumFirstGroup = arr[i] + arr[j];
	int sumSecondGroup = arr[k] + arr[l];
	int sumThirdGroup = totalSum - (sumFirstGroup + sumSecondGroup);

	minSum = min(sumFirstGroup, min(sumSecondGroup, sumThirdGroup));
	maxSum = max(sumFirstGroup, max(sumSecondGroup, sumThirdGroup));
	
	if (sumFirstGroup != sumSecondGroup && sumSecondGroup != sumThirdGroup && sumFirstGroup != sumThirdGroup)
		return maxSum - minSum;
	else return -1;
}

int main() {
	int minSub = INT_MAX;
	for (int i = 0; i < n; i++) cin >> arr[i];

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = 0; k < n; k++) {
				for (int l = k + 1; l < n; l++) {
					if (k == i || k == j || l == j || l == i) continue;

					if (getSub(i, j, k, l) != -1)
						minSub = min(minSub, getSub(i, j, k, l));
				}
			}
		}
	}
	if (minSub == INT_MAX) cout << -1;
	else cout << minSub << endl;
}