#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m, k;
	int num = 0;
	int studentNumber = -1;
	
	vector<int> v(n + 1, 0);
	cin >> n >> m >> k;

	for (int i = 0; i < m; i++) {
		cin >> num;
		v[num]++;

		if (v[num] >= k && studentNumber == -1) {
			studentNumber = num;
		}
	}
	cout << studentNumber;
}