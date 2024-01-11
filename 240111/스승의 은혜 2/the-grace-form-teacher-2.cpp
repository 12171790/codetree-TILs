#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>

#define OFFSET 1000000

using namespace std;

int main() {
	int N, B;
	int price;
	int cnt = 0;
	int totalPrice = 0;
	int maxCnt = INT_MIN;
	cin >> N >> B;
	vector<int> v;

	for (int i = 0; i < N; i++) {
		cin >> price;
		v.emplace_back(price);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j) totalPrice += (v[j] / 2);
			else totalPrice += v[j];

			if (totalPrice > B) break;
			else cnt++;
			
		}
		maxCnt = max(maxCnt, cnt);
		totalPrice = 0;
		cnt = 0;
	}

	cout << maxCnt;
	return 0;
}


// 2 2 4 6 8 20
// 2 2 4 6 8 10