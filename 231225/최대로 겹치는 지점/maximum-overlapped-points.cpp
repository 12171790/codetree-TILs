#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

void StockBlock(vector<int>& v, int a, int b) {

	for (int i = a - 1; i <= b - 1; i++) {
		v[i] += 1;
	}
}

int main() {
	int n;
	int a, b;
	int max;
	cin >> n;
	vector<int> intV(200, 0);

	for (int i = 0; i < n; i++) {
		cin >> a >> b;

		for (int i = a + 100; i <= b + 100; i++) {
			intV[i]++;
		}
	}
	max = intV[a];

	for (int i = 0; i < intV.size(); i++) {
		if (intV[i] > max) max = intV[i];
	}


	cout << max;
	
	return 0;
}