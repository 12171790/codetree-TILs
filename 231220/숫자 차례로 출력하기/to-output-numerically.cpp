#include <iostream>
#include <vector>
using namespace std;

void Print(int n);
void PrintReverse(int n);

int main() {
	int n;
	cin >> n;
	Print(n);
	cout << endl;
	PrintReverse(n);

	return 0;
}

void Print(int n) {
	if (n == 0) return;

	Print(n - 1);
	cout << n << " ";
}

void PrintReverse(int n) {
	if (n == 0) return;

	cout << n << " ";
	Print(n - 1);
}