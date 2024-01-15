#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int n; // n개의 선분
	int cnt = 0; // n-3개의 선분끼리 모두 겹쳐지지 않도록 하는 서로 다른 가짓수
	int a, b; // 입력 받기 위한 변수
	int arr[101] = { 0 }; // 선분이 겹치는지 확인하기 위한 배열
	int temp[101] = { 0 };
	cin >> n;
	vector<vector<int>> v(n, vector<int>(2, 0)); // a, b 쌍을 저장하기 위한 벡터
	for (int i = 0; i < n; i++) {
		cin >> v[i][0] >> v[i][1];
		/*
		cin >> a >> b;
		vector<int> temp1;
		temp1.emplace_back(a);
		temp1.emplace_back(b);
		v.emplace_back(temp1);
		*/
		for (int j = v[i][0]; j <= v[i][1]; j++) {
			arr[j]++;
		}
	}


	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				bool isDup = false;
				for (int l = 0; l < 101; l++)
					temp[l] = arr[l];


				for (int l = v[i][0]; l <= v[i][1]; l++) {
					temp[l]--;
				}


				for (int l = v[j][0]; l <= v[j][1]; l++) {
					temp[l]--;
				}

				for (int l = v[k][0]; l <= v[k][1]; l++) {
					temp[l]--;
				}

				for (int l = 0; l < 101; l++) {
					if (temp[l] >= 2) isDup = true;
				}

				if (!isDup) cnt++;

			}
		}
	}

	cout << cnt;

	return 0;
}