#include <iostream>
#include <vector>
using namespace std;

const int OFFSET = 150;

void Width(vector<vector <int>>& v, int x1, int y1, int x2, int y2) {

	for (int i = x1; i < x2; i++) {
		for (int j = y1; j < y2; j++) {
			v[i][j] = 1;
		}
	}

}

int main() {
	int n;
	vector<vector <int>> v(300, vector<int>(300, 0));
	int x1, y1, x2, y2;
	int cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x1 >> y1;
		cin >> x2 >> y2;

		Width(v, x1 + OFFSET, y1 + OFFSET, x2 + OFFSET, y2 + OFFSET);
	}

	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[0].size(); j++) {
			if (v[i][j] == 1) cnt++;
		}
	}

	cout << cnt;
}