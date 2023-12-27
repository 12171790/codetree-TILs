#include <iostream>
#include <vector>
using namespace std;

int Move(vector<int>& v, char dir, int t, int startPoint);
int Cnt(vector<int>& a, vector<int>& b);

int main() {
	int n, m, t;
	int startPoint = 0;
	char dir;
	vector<int> vA;
	vector<int> vB;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> t >> dir;

		startPoint = Move(vA, dir, t, startPoint);
	}
	vA.emplace_back(startPoint);
	startPoint = 0;
	for (int i = 0; i < m; i++) {
		cin >> t >> dir;

		startPoint = Move(vB, dir, t, startPoint);
	}
	vB.emplace_back(startPoint);

	if (vA.size() > vB.size()) {
		cout << Cnt(vA, vB);
	}
	else {
		cout << Cnt(vB, vA);
	}

	return 0;
}

int Move(vector<int>& v, char dir, int t, int startPoint)
{
	if (dir == 'R') {
		for (int i = 0; i < t; i++) {
			v.emplace_back(startPoint + i);
		}
		return startPoint + t;
	}
	else if (dir == 'L') {
		for (int i = 0; i < t; i++) {
			v.emplace_back(startPoint - i);
		}
		return startPoint - t;
	}
}

int Cnt(vector<int>& max, vector<int>& min)
{
	int cnt = 0;
	for (int i = 1; i < min.size(); i++) {
		if (max[i - 1] != min[i - 1] && max[i] == min[i]) cnt++;
	}

	for (int i = min.size(); i < max.size(); i++) {
		if (min[min.size() - 1] == max[i]) cnt++;
	}

	return cnt;
}