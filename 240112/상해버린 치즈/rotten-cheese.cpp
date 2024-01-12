#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>

#define OFFSET 1000000

using namespace std;

int main() {
	int N, M, D, S; // 사람의 수 N, 치즈의 수 M, 치즈를 먹은 기록의 수 D, 아픈 기록의 수 S
	int p, m, t; // p번째 사람이 m번쨰 치즈를 t초에 먹었다.
	int dArr[1000][3] = { 0 };
	int sArr[50][2] = { 0 };
	int cheeseArr[51] = { 0 };
	cin >> N >> M >> D >> S;

	for (int i = 0; i < D; i++) {
		cin >> p >> m >> t;
		dArr[i][0] = p, dArr[i][1] = m, dArr[i][2] = t;
	}

	for (int i = 0; i < S; i++) {
		cin >> p >> t; // p번쨰 사람이 t초에 확실히 아팠다.
		sArr[i][0] = p, sArr[i][1] = t;
	}

	// 상한 치즈인지 판별
	for (int i = 0; i < S; i++) {
		for (int j = 0; j < D; j++) {
			if (sArr[i][0] == dArr[j][0]) { // 아픈 사람이 몇번째 치즈를 먹었는지 확인
				if (sArr[i][1] > dArr[j][2]) { // 해당 치즈를 아프기 전에 먹었는지 확인
					cheeseArr[dArr[j][1]]++; // 해당 치즈는 상한 치즈 후보
					break; // 상한 치즈인지 확인하면 해당 S문에 대해 더 이상 검사하지 않음
				}
			}
		}
	}

	int cntPeople = 0;
	int Max_phill = INT_MIN;
	for (int i = 1; i <= M; i++) {
		if (cheeseArr[i] == S) { // 치즈가 상한 치즈 후보라면
			int peopleArr[51] = { 0 };
			for (int j = 0; j < D; j++) {
				if (dArr[j][1] == i) { // 상한 치즈를 먹었다면
					peopleArr[dArr[j][0]] = 1;  // 아픈 사람임을 기록
				}
			}

			for (int j = 1; j < N + 1; j++) {
				if (peopleArr[j] == 1) cntPeople++; // 아픈 사람만큼 약이 필요
			}

			Max_phill = max(Max_phill, cntPeople);
		}

		cntPeople = 0;
	}

	cout << Max_phill << endl;

	return 0;
}