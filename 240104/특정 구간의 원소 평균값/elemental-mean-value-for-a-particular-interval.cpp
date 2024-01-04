#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main() {
	int n, e;
	int sum = 0, cntAnswer = 0, cnt = 0;
	double avg = 0;
	vector<int> v;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> e;
		v.emplace_back(e);
	}

	for (int i = 0; i < v.size(); i++) {
		for (int j = i; j < n; j++) {
			for (int k = i; k <= j; k++) {
				sum += v[k];
				cnt++;
			}

			avg = sum / (double)cnt;
			for (int k = i; k <= j; k++) {
				if (v[k] == avg) {
					cntAnswer++;
					break;
				}
			}
			cnt = 0;
			sum = 0;
		}
	}

	cout << cntAnswer;

	return 0;
}