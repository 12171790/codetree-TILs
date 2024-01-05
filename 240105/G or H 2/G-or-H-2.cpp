#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;

class People {
private:
	int num;
	char alpha;

public:
	People(int num, char alpha) { this->num = num; this->alpha = alpha; }

	void setNum(int num) { this->num = num; }
	void setAlpha(char alpha) { this->alpha = alpha; }

	int getNum() { return num; }
	char getAlpha() { return alpha; }
};

bool cmp(People p1, People p2) {
	return p1.getNum() < p2.getNum();
}

int main() {
	
	int N;
	int num, dist = 0;
	int maxDist = INT_MIN;
	int cntG = 0, cntH = 0;
	char ele;
	vector<People> v;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num >> ele;
		v.emplace_back(People(num, ele));
	}

	sort(v.begin(), v.end(), cmp);

	for (int i = 1; i < v.size(); i++) {
		if (v[i].getAlpha() == v[i - 1].getAlpha()) {
			dist += v[i].getNum() - v[i - 1].getNum();
		}
		else {
			maxDist = max(maxDist, dist);
			dist = 0;
		}
	}

	for (int i = 0; i < v.size(); i++) {
		cntG = 0, cntH = 0;

		for (int j = i; j < v.size(); j++) {

			if (v[j].getAlpha() == 'G') cntG++;
			else if (v[j].getAlpha() == 'H') cntH++;

			if (cntG == cntH) {
				dist = v[j].getNum() - v[i].getNum();
			}

			maxDist = max(maxDist, dist);

		}

	}
	cout << maxDist << endl;
}