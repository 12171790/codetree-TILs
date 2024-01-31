#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <climits>
using namespace std;


int smallestDistance(string& str) {
	int min_dist = INT_MAX;

	for (int i = 0; i < str.length(); i++) {
		int cnt = 0;
		bool people = false;
		if (str[i] == '1') {
			for (int j = i + 1; j <str.length(); j++) {
				cnt++;
				if (str[j] == '1') {
					people = true;
					break;
				}
			}
		}

		if (people) {
			min_dist = min(min_dist, cnt);
		}
 	}

	return min_dist;
}

int main() {
	int N;
	int max_dist = INT_MIN;
	string str;

	cin >> N >> str;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '1') continue;

		str[i] = '1';
		for (int j = i + 1; j < str.length(); j++) {
			if (str[j] == '1') continue;

			str[j] = '1';

			max_dist = max(max_dist, smallestDistance(str));

			str[j] = '0';
		}

		str[i] = '0';
	}

	cout << max_dist;

	return 0;
}