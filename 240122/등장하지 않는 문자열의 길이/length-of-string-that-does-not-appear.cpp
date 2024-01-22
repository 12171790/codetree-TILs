#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int N; // 길이가 N인 문자열
	int cnt = 0; // 해당 문자열이 몇 번 등장하는지
	int stringLength[101] = { 0 }; // 문자열 길이
	
	int minStringLength = INT_MAX;
	string str;  
	cin >> N;
	cin >> str;
	
	for (int i = 0; i < N; i++) { // 시작 위치 지정

		for (int j = 1; j <= N - i; j++) { // 부분 문자열 길이
			cnt = 0;
			for (int k = 0; k <= N - j; k++) { // 비교할 문자열의 시작 위치
				string str1 = "";
				string str2 = "";
				for (int l = 0; l < j; l++) {
					//cout << str[k + l];
					//cout << str[i + l];
					str1 += str[k + l];
					str2 += str[i + l];
					//if (str[k + l] == str[i + l]) cnt++;
				}

				if (str1 == str2) {
					cnt++;
				}

			}
			if (cnt >= 2) stringLength[j]++;

		}

	}

	for (int i = 1; i < 101; i++) {
	
		if (stringLength[i] == 0) {
			minStringLength = i;
			break;
		}
	
	}
	cout << minStringLength << endl;

	// ABCDA

}