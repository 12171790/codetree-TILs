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
	int cnt = 0;

	cin >> m1 >> d1;
	cin >> m2 >> d2;
	cin >> day;
	sub = Date(m2, d2) - Date(m1, d1);
	cnt = sub / 7;

	switch (sub % 7) {
	case 0:
		if (day == DAY[0]) cnt += 1;
	case 1:
		if (day == DAY[1]) cnt += 1;
	case 2:
		if (day == DAY[2]) cnt += 1;
	case 3:
		if (day == DAY[3]) cnt += 1;
	case 4:
		if (day == DAY[4]) cnt += 1;
	case 5:
		if (day == DAY[5]) cnt += 1;
	case 6:
		if (day == DAY[6]) cnt += 1; break;
	}
	
	cout << cnt << endl;
}