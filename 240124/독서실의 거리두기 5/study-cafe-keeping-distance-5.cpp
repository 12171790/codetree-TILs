#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	string str;
	int dist = 0; // 사람 사이의 거리를 저장
	int answer = INT_MIN; // 가장 가까운 두 사람 간의 거리의 최댓값
	int strSize = 0;
	cin >> strSize;
	cin >> str;

	for (int i = 0; i < strSize; i++) {
		if (str[i] == '1') continue;
		
		str[i] = '1';
		int minDist = INT_MAX; // 가장 가까운 두 사람 간의 거리
		for (int j = 0; j < strSize; j++) {
			if (str[j] == '0') continue;

			for (int k = j + 1; k < strSize; k++) {

				if (str[k] == '1') {
					dist = abs(k - j);
					minDist = min(minDist, dist);
				}
			}
		}
		answer = max(answer, minDist);
		str[i] = '0';
	}

	cout << answer;
}