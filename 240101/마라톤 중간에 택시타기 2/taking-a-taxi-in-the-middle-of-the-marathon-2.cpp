#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <climits>
using namespace std;

class Point {
private:
	int x;
	int y;

public:
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}

	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }

	int getX() { return x; }
	int getY() { return y; }
};

int main() {
	int N;
	int x, y;
	int totalDistance = 0;
	int minDistance = INT_MAX;
	vector<Point> v;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		v.emplace_back(Point(x, y));
	}

	for (int i = 1; i < v.size() - 1; i++) {

		for (int j = 1; j < v.size(); j++) {
			if (j == i) {
				continue;
			}	
			else if (j == i + 1) {
				totalDistance += abs(v[j - 2].getX() - v[j].getX()) + abs(v[j - 2].getY() - v[j].getY());
			}
			else {
				totalDistance += abs(v[j - 1].getX() - v[j].getX()) + abs(v[j - 1].getY() - v[j].getY());
			}
			
		}

		if (totalDistance < minDistance) {
			minDistance = totalDistance;
		}

		totalDistance = 0;

	}

	cout << minDistance;
}