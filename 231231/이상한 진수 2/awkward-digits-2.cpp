#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <climits>
using namespace std;

int BinaryToDecimal(string& str) {
	int dec = 0;
	int cnt = 0;
	for (int i = str.length() - 1; i >= 0; i--) {
		dec += (str[i] - 48) * pow(2, cnt++);
	}

	return dec;
}


int main() {
	string a;
	bool isZero = false;

	cin >> a;

	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '0') {
			a[i] = '1';
			isZero = true;
			break;
		}
	}
    
	if (isZero) cout << BinaryToDecimal(a);
	else {
		a[a.length() - 1] = '0';
		cout << BinaryToDecimal(a);
	}
}