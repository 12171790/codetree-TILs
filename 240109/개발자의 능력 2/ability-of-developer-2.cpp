#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int minSub = INT_MAX;
	int arr[6];
	int cnt = 0;
	for (int i = 0; i < 6; i++) cin >> arr[i];

	sort(arr, arr + 6);

	int sumFirstGroup = arr[0] + arr[5];
	int sumSecondGroup = arr[1] + arr[4];
	int sumThirdGroup = arr[2] + arr[3];
	int minSum = min(sumFirstGroup, min(sumSecondGroup, sumThirdGroup));
	int maxSum = max(sumFirstGroup, max(sumSecondGroup, sumThirdGroup));


	cout << maxSum - minSum << endl;
}