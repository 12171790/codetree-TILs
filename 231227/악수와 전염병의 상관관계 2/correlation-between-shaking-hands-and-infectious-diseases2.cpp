#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, K, P, T;
	int cnt = 0;
	//악수한 횟수 cnt;
	//N명의 개발자, K번의 악수만 전염병 전파
	//전염병 개발자 P, 총 T번의 악수
	int t, x, y;
	//t초에 x개발자와 y개발자가 악수
	cin >> N >> K >> P >> T;
	vector<vector<int>> info(T, vector<int>(3, 0));
	vector<int> developer(N + 1, 0);


	//info => 악수하는 시간 | x번째 개발자 | y번째 개발자
	for (int i = 0; i < T; i++) {
		cin >> t >> x >> y;

		info[i][0] = t;
		info[i][1] = x;
		info[i][2] = y;
	}

	sort(info.begin(), info.end());

	for (int i = 0; i < info.size(); i++) {
		// 감염되는 경우
		if ((info[i][1] == P || info[i][2] == P) && cnt < K) {
			cnt++;
			developer[info[i][1]] = 1;
			developer[info[i][2]] = 1;
		}
	}

	for (int i = 1; i < developer.size(); i++) {
		cout << developer[i];
	}

	return 0;
}