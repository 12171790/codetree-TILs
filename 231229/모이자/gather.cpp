#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;

int main() {
	int n, e;
	int min = INT_MAX;
	int sum = 0;
	vector<int> peopleInHouse;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> e;
		peopleInHouse.emplace_back(e);
	}

	for (int i = 0; i < peopleInHouse.size(); i++) {

		for (int j = 0; j < peopleInHouse.size(); j++) {
			sum += abs(i - j) * peopleInHouse[j];
		}

		if (sum < min) min = sum;

		sum = 0;
	}

	cout << min << endl;

	return 0;
}