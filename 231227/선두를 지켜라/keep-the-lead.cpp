#include <iostream>
#include <vector>
using namespace std;

int move(vector<int>& v, int vel, int t, int startPoint);

int main()
{
	int n, m;
	int v, t;
	int startPoint = 0, cnt = 0;
	vector<int> vA;
	vector<int> vB;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> v >> t;

		startPoint = move(vA, v, t, startPoint);
	}

	startPoint = 0;
	for (int i = 0; i < m; i++) {
		cin >> v >> t;
		
		startPoint = move(vB, v, t, startPoint);
	}

	for (int i = 2; i < vA.size(); i++) {
		//A가 선두가 되는 경우
		if (vA[i - 1] <= vB[i - 1] && vA[i] > vB[i]) cnt++;

		//B가 선두가 되는 경우
		if (vB[i - 1] <= vA[i - 1] && vB[i] > vA[i]) cnt++;
	}

	cout << cnt;
}


int move(vector<int>& v, int vel, int t, int startPoint)
{
	for (int i = 0; i < t; i++) {
		v.emplace_back(startPoint + (vel * i));
	}
	return startPoint + vel * t;
}