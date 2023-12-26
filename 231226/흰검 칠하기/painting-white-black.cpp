#include <iostream>
#include <vector>
using namespace std;

int Stack(vector<vector<int>>& v, int& move, char& dir, int& prev) {

	
	//-1 검은색, 5 회색, 1 흰색
	if (dir == 'R') { //검은색
		for (int i = prev; i < prev + move; i++) {

			v[i][1]++;

			if (v[i][1] >= 2 && v[i][2] >= 2) {
				v[i][0] = 5;
			}
			else {
				v[i][0] = -1;
			}
		}
		return prev + move - 1;
	}
	else if (dir == 'L') { //흰색
		for (int i = prev; i > prev - move; i--) {

			v[i][2]++;

			if (v[i][1] >= 2 && v[i][2] >= 2) {
				v[i][0] = 5;
			}
			else {
				v[i][0] = 1;
			}
		}
		return prev - move + 1;
	}

}

int main() {
	vector<vector<int>> v(2000, vector<int>(3, 0));
	int n, move = 0, prev = 1000;
	int white = 0, black = 0, gray = 0;
	char dir = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> move >> dir;
		prev = Stack(v, move, dir, prev);
	}
	for (int i = 0; i < v.size(); i++) {
		if (v[i][0] == 1) white++;
		else if (v[i][0] == -1) black++;
		else if (v[i][0] == 5) gray++;
	}
	cout << white << " " << black << " " << gray << endl;

	return 0;
}