#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Pair {
private:
	int value;
	int num;
	int order;
public:
	Pair(int value, int num, int order = 0) {
		SetValue(value);
		SetNum(num);
		SetOrder(order);
	}

	void SetValue(int value) { this->value = value; }
	void SetNum(int num) { this->num = num; }
	void SetOrder(int order) { this->order = order; }

	int GetValue() { return this->value; }
	int GetNum() { return this->num; }
	int GetOrder() { return this->order; }
};

bool Cmp(Pair& a, Pair& b) {
	if (a.GetValue() == b.GetValue()) {
		return a.GetNum() < b.GetNum();
	}
	return a.GetValue() < b.GetValue();
}

bool CmpOrder(Pair& a, Pair& b) {
	return a.GetNum() < b.GetNum();
}

int main() {
	int n, e;
	cin >> n;
	vector<Pair> v;
	vector<int> numV;
	numV.reserve(n);
	v.reserve(n);

	for (int i = 0; i < n; i++) {
		cin >> e;
		v.emplace_back(Pair(e, i + 1));
		numV.emplace_back(i + 1);
	}

	sort(v.begin(), v.end(), Cmp);

	// 3 1 6 2 7 30 1
	// 1 2 3 4 5 6  7

	for (int i = 0; i < n; i++) {
		v[i].SetOrder(numV[i]);
	}

	sort(v.begin(), v.end(), CmpOrder);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i].GetOrder() << " ";
	}

	// 1 1 2 3 6 7 30
	// 2 7 4 1 3 5 6  num
	// 1 2 3 4 5 6 7  order

	cout << endl;
}