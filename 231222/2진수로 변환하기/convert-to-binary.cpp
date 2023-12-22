#include <iostream>
#include <vector>
using namespace std;

void Digit(int n) {
	vector<int> v;
	int cnt = 0;

	while (true) {
		if (n < 2) {
			v.emplace_back(n);
			break;
		}
		
		v.emplace_back(n % 2);
		n /= 2;
	}
	for (int i = v.size() - 1; i >= 0; i--) {
		cout << v[i];
	}

}

int main() {
	int n;
	cin >> n;
	Digit(n);


	return 0;
}