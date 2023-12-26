#include <iostream>
#include <vector>
using namespace std;

int Stack(vector<int>& v, int& move, char& dir, int& prev) {

	if (dir == 'R') {
		for (int i = prev; i < prev + move; i++) {
			v[i]++;
		}
		return prev + move;
	}
	else if (dir == 'L') {
		for (int i = prev; i > prev - move; i--) {
			v[i]++;
		}
		return prev - move;
	}

}

int main() {
	vector<int> v(2001, 0);
	int n, move = 0, prev = 1000, cnt = 0;
	char dir = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> move >> dir;
		prev = Stack(v, move, dir, prev);
	}

	for (int i = 0; i < v.size(); i++) {
		if (v[i] >= 2) cnt++;
	}
	
	cout << cnt << endl;

	return 0;
}