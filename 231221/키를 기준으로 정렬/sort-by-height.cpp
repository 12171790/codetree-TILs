#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class People {
private:
	string name;
	double height;
	double weight;

public:
	People(string name = "", double height = 0, double weight = 0) {
		this->name = name;
		this->height = height;
		this->weight = weight;
	}
	
	string getName() { return this->name; }
	double getHeight() { return this->height; }
	double getWeight() { return this->weight; }

	void setName() { this->name = name; }
	void setHeight() { this->height = height; }
	void setWeight() { this->weight = weight; }

	void Display() {
		cout << getName() << " " << getHeight() << " " << getWeight() << endl;
	}
};

bool cmp(People a, People b) { return a.getHeight() < b.getHeight(); }

int main() {
	int n;
	string name;
	double height, weight;
	cin >> n;
	vector<People> peopleVector;
	peopleVector.reserve(n);

	for (int i = 0; i < n; i++) {
		cin >> name >> height >> weight;
		peopleVector.emplace_back(People(name, height, weight));
	}

	sort(peopleVector.begin(), peopleVector.end(), cmp);

	for (int i = 0; i < peopleVector.size(); i++) {
		peopleVector[i].Display();
	}

	return 0;
}