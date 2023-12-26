#include <iostream>
#include <vector>
using namespace std;

const int OFFSET = 1000;

void Width(vector<vector <int>>& v, int x1, int y1, int x2, int y2, bool nextRect) {

	for (int i = x1; i < x2; i++) {
		for (int j = y1; j < y2; j++) {
			if (nextRect) v[i][j]--;
			else v[i][j]++;
		}
	}

}

int main() {
	vector<vector<int>> v(2000, vector<int>(2000, 0));
	int arr[2000][2000];
	int x1, y1;
	int x2, y2;
	int minX = 2000, minY = 2000;
	int maxX = 0, maxY = 0;
	int cnt = 0;
	bool nextRect = false;

	for (int i = 0; i < 2; i++) {
		cin >> x1 >> y1;
		cin >> x2 >> y2;
		if (i == 1) nextRect = true;
		Width(v, x1 + OFFSET, y1 + OFFSET, x2 + OFFSET, y2 + OFFSET, nextRect);
	}

	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[0].size(); j++) {
			if (v[i][j] == 1) {
				if (i < minX) minX = i;
				if (i > maxX) maxX = i;
				if (j < minY) minY = j;
				if (j > maxY) maxY = j;
			}
		}
	}

	for (int i = minX; i <= maxX; i++) {
		for (int j = minY; j <= maxY; j++) {
			cnt++;
		}
	}

	cout << cnt;
}