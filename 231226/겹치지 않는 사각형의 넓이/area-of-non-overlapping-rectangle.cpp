#include <iostream>
#include <vector>
using namespace std;

const int OFFSET = 1000;

void Width(vector<vector <int>>& v, int x1, int y1, int x2, int y2, bool RectM) {

	for (int i = x1; i < x2; i++) {
		for (int j = y1; j < y2; j++) {
			if (RectM) v[i][j]--;
			else v[i][j]++;
		}
	}

}

int main() {
	vector<vector<int>> v(2000, vector<int>(2000, 0));
	int x1, y1;
	int x2, y2;
	int cnt = 0;
	bool RectM = false;

	for (int i = 0; i < 3; i++) {
		cin >> x1 >> y1;
		cin >> x2 >> y2;
		if (i == 2) RectM = true;
		Width(v, x1 + OFFSET, y1 + OFFSET, x2 + OFFSET, y2 + OFFSET, RectM);
	}

	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[0].size(); j++) {
			if (v[i][j] == 1) cnt++;
		}
	}

	cout << cnt;
}