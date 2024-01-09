#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int N;
	int arr[1000] = { 0 };
	int cnt1 = 0, cnt2 = 0, num = 0;
	int cnt1Answer = 0, cnt2Answer = 0;
	int totalAnswer = 0;
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num >> cnt1 >> cnt2;

		int firstNum = num / 100;
		int secondNum = (num / 10) % 10;
		int thirdNum = num % 10;
		for (int j = 100; j < 1000; j++) {
			int first = j / 100; // 백의 자리
			int second = (j / 10) % 10; // 십의 자리
			int third = j % 10; // 일의 자리
			
			if (first == second || first == third || second == third) continue;
			if (second == 0 || third == 0) continue;

			if (firstNum == first) cnt1Answer++;
			if (secondNum == second) cnt1Answer++;
			if (thirdNum == third) cnt1Answer++;

			if (firstNum == second || firstNum == third) cnt2Answer++;
			if (secondNum == first || secondNum == third) cnt2Answer++;
			if (thirdNum == first || thirdNum == second) cnt2Answer++;

			if (cnt1Answer == cnt1 && cnt2Answer == cnt2) arr[j]++;

			cnt1Answer = 0;
			cnt2Answer = 0;
		}
	}

	for (int i = 100; i < 1000; i++) {
		if (arr[i] == N) totalAnswer++;
	}

	cout << totalAnswer << endl;
}