#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
	cin >> n;
	string str;
	char alp;
	int cnt = 0;
	int sum = 0;

	vector<string> v1;
	
	for (int i = 0; i < n; i++) {
		cin >> str;
		v1.emplace_back(str);
	}

	cin >> alp;

	for (int i = 0; i < n; i++) {
		if (v1[i][0] == alp) {
			cnt++;
			sum += v1[i].size();
		}
	}
	cout << fixed;
	cout.precision(2);
	cout << cnt << " " << sum / (double)cnt << endl;
}