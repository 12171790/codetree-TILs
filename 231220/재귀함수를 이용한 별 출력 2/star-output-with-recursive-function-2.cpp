#include <iostream>
using namespace std;

void PrintStars(int n) {
	if (n == 0) return;
	for (int i = 0; i < n; i++) {
		cout << "* ";
	}
	cout << endl;
	PrintStars(n - 1);
	for (int i = 0; i < n; i++) {
		cout << "* ";
	}
	cout << endl;
}

int main() {
	int n;
	cin >> n;
	PrintStars(n);

	return 0;
}