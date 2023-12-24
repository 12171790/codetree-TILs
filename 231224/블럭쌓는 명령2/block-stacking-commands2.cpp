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
	int n, k;
	int a, b;
	cin >> n >> k;
	vector<int> intV(n, 0);
	for (int i = 0; i < k; i++) {
		cin >> a >> b;
		StockBlock(intV, a, b);
	}

	int max = intV[0];
	for (int i = 0; i < intV.size(); i++) {
		if (intV[i] > max) max = intV[i];
	}

	cout << max;
	
	return 0;
}