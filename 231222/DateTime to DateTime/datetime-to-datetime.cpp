#include <iostream>
using namespace std;

const int MONTH[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

// 11월 1일 0시 0분 기준
int Minute(int day, int hour, int minute) {
	return ((day - 1) * 24 * 60) + (hour * 60) + minute;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	cout << Minute(a, b, c) - Minute(11, 11, 11) << endl;
	return 0;
}