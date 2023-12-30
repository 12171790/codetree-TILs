#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main() {
	int N, e;
	int cnt = 0;
	vector<int> v;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> e;
		v.emplace_back(e);
	}

	for (int i = 0; i < v.size() - 2; i++) {
		for (int j = i + 1; j < v.size() - 1; j++) {
			for (int k = j + 1; k < v.size(); k++) {
				if (v[k] >= v[j] && v[j] >= v[i]) {
					cnt++;
				}
			}
		}
 	}

	cout << cnt;
}