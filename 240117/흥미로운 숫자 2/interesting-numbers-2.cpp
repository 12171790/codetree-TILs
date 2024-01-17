#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int X, Y; // 두 개의 숫자
	int cnt = 0;
	int cntAnswer = 0;
	int posNum = 0;
	cin >> X >> Y;
	// 11121 21111 11112 23158
	for (int i = X; i <= Y; i++) {
		string str = to_string(i);
		
		for (int j = 1; j < str.length(); j++) {
			if (str[0] == str[j]) cnt++;
		}

		if (cnt == 0) {
			for (int j = 0; j < str.length(); j++) {
				if (j == 1) continue;
				else {
					if (str[1] == str[j]) cnt++;
				}
			}
		}

		if (cnt == str.length() - 2) cntAnswer++;
		cnt = 0;
	}

	cout << cntAnswer << endl;

	return 0;
}