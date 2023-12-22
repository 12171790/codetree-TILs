#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int BtD(string& s) {
	int num = 0;
	int dec = stoi(s);
	int cnt = 0;
	for (int i = s.length() - 1; i >= 0; i--) {
		num += (dec % 10) * pow(2, cnt++);
		dec /= 10;
	}

	return num;
}

void Trans(int n, int b) {
	vector<int> v;

	while (true) {
		if (n < b) {
			v.emplace_back(n);
			break;
		}

		v.emplace_back(n % b);
		n /= b;
	}

	for (int i = v.size() - 1; i >= 0; i--) {
		cout << v[i];
	}
	cout << endl;
}

int main() {
	int n, b;
	cin >> n >> b;

	Trans(n, b);

	return 0;
}