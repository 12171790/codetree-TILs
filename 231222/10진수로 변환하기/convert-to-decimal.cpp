#include <iostream>
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

int main() {
	string n;
	cin >> n;

	cout << BtD(n) << endl;
	return 0;
}