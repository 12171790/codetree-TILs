#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;



int main() {
	int N, M;
	int ele;
	int cntAnswer = 0;
	bool dup = false;
	int cnt = 0;
	vector<int> A;
	vector<int> B;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> ele;
		A.emplace_back(ele);
	}

	for (int i = 0; i < M; i++) {
		cin >> ele;
		B.emplace_back(ele);
	}

	for (int i = 0; i <= A.size() - B.size(); i++) {
		vector<int> v(B.size(), 0);
		for (int j = 0; j < B.size(); j++) {

			for (int k = 0; k < B.size(); k++) {
				if (A[i + j] == B[k]) {
					if (v[k] == 1) continue;
					else {
						v[k] = 1;
						cnt++;
						break;
					}
				}
			}

		}

		if (cnt == B.size()) {
			cntAnswer++;
		}

		cnt = 0;
	}

	cout << cntAnswer << endl;
}