#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int A, B, C;
	int subC_Min = INT_MAX;
	int answer = 0;
	cin >> A >> B >> C;
	int cntA = 0;
	while (A * cntA <= C) {
		int sum = 0;
		int cntB = 0;

		while (sum <= C) {
			sum = A * cntA + B * cntB;
			cntB++;
		}
		sum -= B;
		if (subC_Min > abs(C - sum)) {
			subC_Min = abs(C - sum);
			answer = sum;
		}
		cntA++;
	}

	cout << answer;
}