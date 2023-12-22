#include <iostream>
using namespace std;

const int MONTH[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
const string Day[7] = { "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun" };

//2011년 1월 1일 기준
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
	int sub = 0;

	cin >> m1 >> d1;
	cin >> m2 >> d2;
	sub = Date(m2, d2) - Date(m1, d1);
	
	if (sub >= 0) {
		cout << Day[sub % 7] << endl;
	}
	else {
		cout << Day[7 - (abs(sub) % 7)] << endl;
	}
}