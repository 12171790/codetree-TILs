#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Student {
private:
	string name;
	int ko;
	int en;
	int ma;

public:
	Student(string name = "", int ko = 0, int en = 0, int ma = 0) {
		this->name = name;
		this->ko = ko;
		this->en = en;
		this->ma = ma;
	}

	int getKorean() { return this->ko; }
	int getEnglish() { return this->en; }
	int getMath() { return this->ma; }

	int getTotalScore() {
		return getKorean() + getEnglish() + getMath();
	}

	void setName(int ko) { this->ko = ko; }
	void setHeight(int en) { this->en = en; }
	void setWeight(int ma) { this->ma = ma; }

	void Display() {
		cout << this->name << " " << getKorean() << " " << getEnglish() << " " << getMath() << endl;
	}
};

bool cmp(Student a, Student b) {
	return a.getTotalScore() < b.getTotalScore();
}

int main() {
	int n;
	string name;
	int ko, en, ma;
	vector<Student> studentVector;
	cin >> n;
	studentVector.reserve(n);

	for (int i = 0; i < n; i++) {
		cin >> name >> ko >> en >> ma;
		studentVector.emplace_back(name, ko, en, ma);
	}

	sort(studentVector.begin(), studentVector.end(), cmp);

	for (int i = 0; i < studentVector.size(); i++) {
		studentVector[i].Display();
	}

	return 0;
}