#include <iostream>
#include <vector>
using namespace std;

const int OFFSET = 100;

void Width(vector<vector <int>>& v, int x1, int y1, int x2, int y2, bool isBlue) {

	for (int i = x1; i < x2; i++) {
		for (int j = y1; j < y2; j++) {
			if (isBlue) v[i][j] = -1;
			else v[i][j] = 1;
		}
	}

}

int main() {
	vector<vector<int>> v(200, vector<int>(200, 0));
	int n;
	int x1, y1;
	int x2, y2;
	int cnt = 0;
	bool isBlue = false;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x1 >> y1;
		cin >> x2 >> y2;
		if (i % 2 == 1) isBlue = true;
		Width(v, x1 + OFFSET, y1 + OFFSET, x2 + OFFSET, y2 + OFFSET, isBlue);
	}

	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[0].size(); j++) {
			if (v[i][j] == -1) cnt++;
		}
	}

	cout << cnt;
}