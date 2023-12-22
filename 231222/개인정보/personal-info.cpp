#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student {
private:
	double height;
	double weight;
	string name;

public :
	Student(double height, double weight, string name = "") {
		SetHeight(height);
		SetWeight(weight);
		SetName(name);
	}

	void SetHeight(double height) { this->height = height; }
	void SetWeight(double weight) { this->weight = weight; }
	void SetName(string name) { this->name = name; }
	
	double GetHeight() { return this->height; }
	double GetWeight() { return this->weight; }
	string GetName() { return this->name; }

	void Display() { 
		cout << GetName() << " " << GetHeight() << " "; 
		printf("%.1f\n", GetWeight());
	}
};

bool CmpByName(Student& a, Student& b) {
	return a.GetName() < b.GetName();
}

bool CmpByHeight(Student& a, Student& b) {
	return a.GetHeight() > b.GetHeight();
}

int main() {
	int n;
	double height;
	double weight;
	string name;

	vector<Student> studentVector;
	n = 5;
	studentVector.reserve(n);

	for (int i = 0; i < n; i++) {
		cin >> name >> height >> weight;
		studentVector.emplace_back(Student(height, weight, name));
	}

	sort(studentVector.begin(), studentVector.end(), CmpByName);
	cout << "name" << endl;
	for (int i = 0; i < studentVector.size(); i++) {
		studentVector[i].Display();
	}

	sort(studentVector.begin(), studentVector.end(), CmpByHeight);
	cout << "\nheight" << endl;
	for (int i = 0; i < studentVector.size(); i++) {
		studentVector[i].Display();
	}

	return 0;
}