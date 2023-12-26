#include <iostream>
#include <vector>
using namespace std;

int Stack(vector<int>& v, int& move, char& dir, int& prev) {

	//-1 검은색, 1 흰색
	if (dir == 'R') { //검은색
		for (int i = prev; i < prev + move; i++) {
			v[i] = -1;
		}
		return prev + move - 1;
	}
	else if (dir == 'L') { //흰색
		for (int i = prev; i > prev - move; i--) {
			v[i] = 1;
		}
		return prev - move + 1;
	}

}

int main() {
	vector<int> v(200000, 0);
	int n, move = 0, prev = 100000;
	int white = 0, black = 0, gray = 0;
	char dir = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> move >> dir;
		prev = Stack(v, move, dir, prev);
	}
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == 1) white++;
		else if (v[i] == -1) black++;
	}
	cout << white << " " << black  << endl;

	return 0;
}