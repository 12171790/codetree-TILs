#include <iostream>
#include <vector>
using namespace std;

int Move(vector<int>& v, int vel, int t, int startPoint);

int main() {
	// A의 속도와 시간 조합 N개
	// B의 속도와 시간 조합 M개
	int N, M;
	// 속도 v, 시간 t
	int v, t;
	// A와 B의 시작 위치
	int startPoint = 0;
	// 선두 조합이 바뀌는 횟수
	int cnt = 0;
	// A의 위치를 저장할 벡터 vecA
	// B의 위치를 저장할 벡터 vecB
	vector<int> vecA;
	vector<int> vecB;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> v >> t;

		startPoint = Move(vecA, v, t, startPoint);
	}
	vecA.emplace_back(startPoint);
	startPoint = 0;

	for (int i = 0; i < M; i++) {
		cin >> v >> t;

		startPoint = Move(vecB, v, t, startPoint);
	}
	vecB.emplace_back(startPoint);

	for (int i = 1; i < vecA.size(); i++) {
		//B가 선두로 바뀌는 경우
		if ((vecA[i - 1] > vecB[i - 1] || vecB[i - 1] == vecA[i - 1]) && vecA[i] < vecB[i]) cnt++;
		//A가 선두로 바뀌는 경우
		if ((vecB[i - 1] > vecA[i - 1] || vecB[i - 1] == vecA[i - 1]) && vecB[i] < vecA[i]) cnt++;
		//A와 B가 동시에 선두로 서는 경우
		if ((vecA[i - 1] > vecB[i - 1] || vecA[i - 1] < vecB[i - 1]) && vecA[i] == vecB[i]) cnt++;
	}

	cout << cnt << endl;
	return 0;
}

int Move(vector<int>& v, int vel, int t, int startPoint)
{

	for (int i = 0; i < t; i++) {
		v.emplace_back(startPoint + (vel * i));
	}

	return startPoint + (vel * t);
}