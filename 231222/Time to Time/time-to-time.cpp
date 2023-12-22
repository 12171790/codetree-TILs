#include <iostream>
using namespace std;

int Minute(int hour, int min) {
	return (hour * 60) + min;
}

int main() {
	int a, b;
	int c, d;

	cin >> a >> b;
	cin >> c >> d;

	cout << Minute(c, d) - Minute(a, b) << endl;
	return 0;
}