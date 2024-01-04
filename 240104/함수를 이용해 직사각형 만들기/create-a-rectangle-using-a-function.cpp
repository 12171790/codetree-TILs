#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;

void drawRect(int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << 1;
		}
		cout << endl;
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	drawRect(n, m);

	return 0;
}