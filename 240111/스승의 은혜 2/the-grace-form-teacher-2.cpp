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
	int j = 0;
	int totalPrice = 0;
	int maxCnt = INT_MIN;
	cin >> N >> B;
	vector<int> v;

	for (int i = 0; i < N; i++) {
		cin >> price;
		v.emplace_back(price);
	}

	for (int i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if(totalPrice >= B) break;
			
			if (i == j) totalPrice += (v[i] / 2);
			else totalPrice += v[i];
			
		}
		maxCnt = max(maxCnt, j - 1);
		totalPrice = 0;
	}

	cout << maxCnt;

	return 0;
}