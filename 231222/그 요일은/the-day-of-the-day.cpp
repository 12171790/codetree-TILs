#include <iostream>
using namespace std;

const int MONTH[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
const string DAY[7] = { "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun" };

//2024년 1월 1일 기준
int Date(int month, int day) {
	int date = 0;

	for (int i = 1; i < month; i++) {
		date += MONTH[i];
	}

	return date + day;
}

int main() {
	int m1, d1;
	int m2, d2;
	string day;
	int sub = 0;
	int cnt = 1;

	cin >> m1 >> d1;
	cin >> m2 >> d2;
	cin >> day;
	sub = Date(m2, d2) - Date(m1, d1);
	cnt = sub / 7;
	
	for (int i = 0; i <= sub % 7; i++) {
		if (DAY[i] == day) cnt++;
	}

	
	cout << cnt << endl;
}