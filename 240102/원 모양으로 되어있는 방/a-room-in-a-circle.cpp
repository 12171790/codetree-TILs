#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
using namespace std;

int main() {
	int N, e;
	int min = INT_MAX;
	int dist = 0;
	vector<int> v;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> e;
		v.emplace_back(e);
	}

	for (int i = 0; i < N; i++) {
		for (int j = i; j < N + i; j++) {

			dist += abs(i - j) * v[j % N];

		}
		if (dist < min) min = dist;

		dist = 0;
	}

	cout << min << endl;

	return 0;
}