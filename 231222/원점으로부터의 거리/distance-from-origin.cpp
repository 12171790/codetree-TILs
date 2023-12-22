#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Dot {
private:
	int x;
	int y;
	int num;
public:
	Dot(int x = 0, int y = 0, int num = 0) {
		SetX(x);
		SetY(y);
		this->num = num;
	}

	void SetX(int x) { this->x = x; }
	void SetY(int y) { this->y = y; }
    void setNum(int num) { this->num = num; }

	int GetX() { return this->x; }
	int GetY() { return this->y; }
    int GetNum() { return this->num; }

	void Display() { cout << GetNum() << endl; }
};

int Distance(Dot& a) {
	return abs(0 - a.GetX()) + abs(0 - a.GetY());
}

bool Cmp(Dot& a, Dot& b) {
	if (Distance(a) == Distance(b)) {
		return a.GetNum() < b.GetNum();
	}
	return Distance(a) < Distance(b);
}

int main() {
	int n;
	int x, y;
	vector<Dot> dotV;
	cin >> n;
	dotV.reserve(n);

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		dotV.emplace_back(x, y, i + 1);
	}

	sort(dotV.begin(), dotV.end(), Cmp);

	for (int i = 0; i < dotV.size(); i++) {
		dotV[i].Display();
	}

	return 0;
}