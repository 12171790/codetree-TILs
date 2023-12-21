#include <iostream>
#include <string>
using namespace std;
class agent {
public:
	string code;
	string place;
	int hour;


	agent(string& code, string& place, int& hour) {
		this->code = code;
		this->place = place;
		this->hour = hour;
	}

	void display() {
		cout << "secret code : " << this->code << endl;
		cout << "meeting point : " << this->place << endl;
		cout << "time : " << this->hour << endl;
	}
};

int main() {
	string code;
	string place;
	int hour;
	cin >> code >> place >> hour;
	agent agent1(code, place, hour);
	agent1.display();

	return 0;
}