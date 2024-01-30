#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <climits>
using namespace std;

bool isPossible(vector<int>& v, int max_val, int k) {
	int cnt = 0;
	vector<int> temp;

	for (int i = 0; i < v.size(); i++) {
		if (v[i] <= max_val) {
			temp.emplace_back(i);
		}
	}

	for (int i = 1; i < temp.size(); i++) {
		if (temp[i] - temp[i - 1] > k) {
			return false;
		}
	}

	return true;
}


int main() {
	int n, k, e; // n개의 돌, k 이내로 점프
	int minAnswer = INT_MAX;
	vector<int> v;
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> e;
		v.emplace_back(e);
	}

	for (int i = max(v[0], v[v.size() - 1]); i < 100; i++) { // i번째 수가 최대라고 가정
		if (isPossible(v, i, k)) {
			minAnswer = min(minAnswer, i);
		}
	}
	
	cout << minAnswer;

	return 0;
}