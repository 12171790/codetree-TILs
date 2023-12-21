#include <iostream>
#include <string>
using namespace std;

class User {
private:
	string id;
	int level;
public:

	User(string id = "codetree", int level = 10) {
		setID(id);
		setLevel(level);
	}

	void setID(string& id) {
		this->id = id;
	}

	void setLevel(int& level) {
		this->level = level;
	}

	string getID() {
		return this->id;
	}

	int getLevel() {
		return this->level;
	}

	void display() {
		cout << "user " << getID() << " lv " << getLevel() << endl;
	}
};

int main() {
	string str;
	int level;
	User user1;
	cin >> str >> level;
	User user2(str, level);

	user1.display();
	user2.display();
	return 0;
}