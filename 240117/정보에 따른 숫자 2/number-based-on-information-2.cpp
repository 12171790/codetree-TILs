#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int T, a, b, x; // T개의 알파벳, x의 위치 a ~ b, 알파벳이 놓여있는 위치 x
	char c; // 알파벳 값 c
	int interestingPoint = 0; // 흥미로운 위치의 수 
	// 알파벳 S까지의 거리 d1이 N까지의 거리 d2보다 같거나 작은 경우
	vector<pair<char, int>> v;
	cin >> T >> a >> b;
	for (int i = 0; i < T; i++) {
		cin >> c >> x;
		v.emplace_back(make_pair(c, x));
	}
	
	for (int i = a; i <= b; i++) {
		int minD1 = INT_MAX, minD2 = INT_MAX;
		
		for (int j = 0; j < v.size(); j++) {
			if (v[j].first == 'S') {
				minD1 = min(minD1, abs(v[j].second - i));
			}
			if (v[j].first == 'N') {
				minD2 = min(minD2, abs(v[j].second - i));
			}
		}

		if (minD1 <= minD2) interestingPoint++;

	}
	
	cout << interestingPoint << endl;

	return 0;
}