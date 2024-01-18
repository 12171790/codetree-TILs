#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

bool isPalindrome(int i) {
	string str = to_string(i);
	int sameNumber = 0;

	for (int i = 0; i < str.length() / 2; i++) {
		if (str[i] == str[str.length() - 1 - i]) sameNumber++;
	}

	if (sameNumber == (str.length() / 2)) return true;
	else return false;

}

int main() {
	int X, Y; // 두 개의 정수 X, Y
	int cnt = 0;
	cin >> X >> Y;
	for (int i = X; i <= Y; i++) {
		if (isPalindrome(i)) cnt++;
	}

	cout << cnt << endl;

	return 0;
}