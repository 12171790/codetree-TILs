#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Developer {
private:
	int number;
	bool infect;
	int infectCnt;

public:
	Developer(int number, bool infect = false, int infectCnt = 0) {
		this->number = number;
		this->infect = infect;
		this->infectCnt = infectCnt;
	}

	int GetNumber() { return number; }
	bool GetInfect() { return infect; }
	int GetInfectCnt() { return infectCnt; }

	void SetNumber(int number) { this->number = number; }
	void SetInfect(bool infect) { this->infect = infect; }
	void SetInfectCnt(int infectCnt) { this->infectCnt = infectCnt; }

	void IncreaseInfectCnt() { this->infectCnt++; }
};


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
	vector<Developer> developerVec;

	for (int i = 1; i <= N; i++) {
		if(i == P) developerVec.emplace_back(Developer(i, true, 0));
		else developerVec.emplace_back(Developer(i, false, 0));
	}

	//info => 악수하는 시간 | x번째 개발자 | y번째 개발자
	for (int i = 0; i < T; i++) {
		cin >> t >> x >> y;

		info[i][0] = t;
		info[i][1] = x;
		info[i][2] = y;
	}

	//시간을 오름차순으로 정렬
	sort(info.begin(), info.end());

	for (int i = 0; i < info.size(); i++) {
		for (int j = 0; j < developerVec.size(); j++) {
			if (developerVec[j].GetInfect()) { // j번쨰 개발자가 감염 되었다면
				if ((info[i][1] == developerVec[j].GetNumber() 
					|| info[i][2] == developerVec[j].GetNumber())
					&& developerVec[j].GetInfectCnt() < K) {
					developerVec[info[i][1] - 1].SetInfect(true);
					developerVec[info[i][2] - 1].SetInfect(true);
					developerVec[j].IncreaseInfectCnt();
					break;
				}
			}
		}
	}

	for (int i = 0; i < developerVec.size(); i++) {
		if (developerVec[i].GetInfect()) cout << 1;
		else cout << 0;
	}

	

	return 0;
}