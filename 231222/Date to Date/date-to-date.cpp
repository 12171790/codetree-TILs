#include <iostream>
using namespace std;

const int MONTH[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

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

	cin >> m1 >> d1;
	cin >> m2 >> d2;
	
	cout << Date(m2, d2) - Date(m1, d1) + 1 << endl;
	return 0;
}