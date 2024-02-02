#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int N, e;
	vector<int> v;
    cin >> N;
	for (int i = 0; i < N - 1; i++) {
		cin >> e;
		v.emplace_back(e);
	}

	for (int i = 1; i <= N; i++) { //첫번째 숫자 지정
		vector<int> temp;
        bool indup = false;
		temp.emplace_back(i);
		for (int j = 0; j < N - 1; j++) {
			temp.emplace_back(v[j] - temp[j]);
		}

		for (int j = 1; j < N; j++) {
			if (temp[j] == temp[j - 1]) {
				indup = true;
				break;
			}
		}

		if (!indup) {
			for (int j = 0; j < temp.size(); j++) {
				cout << temp[j] << " ";
			}
			break;
		}
	}
}