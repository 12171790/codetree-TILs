#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student {
private:
	double height;
	double weight;
	int num;

public :
	Student(double height, double weight, int num = 0) {
		SetHeight(height);
		SetWeight(weight);
		this->num = num;
	}

	void SetHeight(double height) { this->height = height; }
	void SetWeight(double weight) { this->weight = weight; }
	
	double GetHeight() { return this->height; }
	double GetWeight() { return this->weight; }
	int GetNum() { return this->num; }

	void Display() { cout << GetHeight() << " " << GetWeight() << " " << GetNum() << endl; }
};

bool cmp(Student& a, Student& b) {
	if (a.GetHeight() == b.GetHeight()) {
		if (a.GetWeight() == b.GetWeight()) {
			return a.GetNum() < b.GetNum();
		}

		return a.GetWeight() > b.GetWeight();
	}
	return a.GetHeight() > b.GetHeight();
}

int main() {
	int n;
	double height;
	double weight;

	vector<Student> studentVector;
	cin >> n;
	studentVector.reserve(n);

	for (int i = 0; i < n; i++) {
		cin >> height >> weight;
		studentVector.emplace_back(Student(height, weight, i + 1));
	}

	sort(studentVector.begin(), studentVector.end(), cmp);
	
	for (int i = 0; i < studentVector.size(); i++) {
		studentVector[i].Display();
	}

	return 0;
}