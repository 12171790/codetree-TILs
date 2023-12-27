#include <iostream>
#include <vector>
using namespace std;


int move(vector<int>& v, char dir, int t, int startPoint);

int main() 
{
	vector<int> vA;
	vector<int> vB;
	int n, m, t;
	int startPoint = 0, meet = -1;
	char dir;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> dir >> t;
		startPoint = move(vA, dir, t, startPoint);
	}
	startPoint = 0;
	for (int i = 0; i < m; i++) {
		cin >> dir >> t;
		startPoint = move(vB, dir, t, startPoint);
	}

	for (int i = 1; i < vA.size(); i++) {
		if (vA[i] == vB[i]) {
			meet = i;
			break;
		}
	}

	cout << meet;
}

int move(vector<int>& v, char dir, int t, int startPoint)
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