#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;

int N;

bool inRange(int r, int c) {
	return r >= 0 && r < N && c >= 0 && c < N;
}

int main() {
	int S, e;
	int sum = 0;
	int minSub = INT_MAX;
	int sub = 0;

	cin >> N >> S;
	vector<int> v;
	for (int i = 0; i < N; i++) {
		cin >> e;
		v.emplace_back(e);
	}

	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {

			for (int k = 0; k < N; k++) {
				if (k != i && k != j) sum += v[k];
			}

			sub = abs(S - sum);
			sum = 0;

			if (sub < minSub) minSub = sub;
		}
	}

	cout << minSub;

	return 0;
}