#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <climits>
using namespace std;

int main() {
	int A, B, C, D;
	int e;
	vector<int> v;

	for (int i = 0; i < 15; i++) {
		cin >> e;
		v.emplace_back(e);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < 15; i++) {
		for (int j = i + 1; j < 15; j++) {
			for (int k = j + 1; k < 15; k++) {
				for (int l = k + 1; l < 15; l++) {
					if (v[i] + v[j] + v[k] + v[l] == v[v.size() - 1]) {
						A = v[i], B = v[j], C = v[k], D = v[l];
						break;
					}
				}
			}
		}
	}

	cout << A << " " << B << " " << C << " " << D << endl;

	return 0;
}