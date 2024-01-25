#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int x, n; // 양의 정수 x, 곱하는 것을 n번 반복
	int a, b;
	int answer = 0;
	vector<pair<int, int>> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		v.emplace_back(make_pair(a, b));
	}

	for (int i = 1; i < v[0].second / 2; i++) {
		int temp = i;
		bool sefy = true;
		for (int j = 0; j < v.size(); j++) {
			temp *= 2;
			if (temp < v[j].first || temp > v[j].second) {
				sefy = false;
				break;
			}
		}

		if (sefy) {
			answer = i;
			break;
		}
	}

	cout << answer;
}