#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main() {
	string A;
	int cnt = 0;

	cin >> A;

	for (int i = 0; i < A.length() - 1; i++) {
		if (A[i] == '(') {
			for (int j = i + 1; j < A.length(); j++) {
				if (A[j] == ')') {
					cnt++;
				}
			}
		}
	}

	cout << cnt;
}