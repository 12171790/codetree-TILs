#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Agent {
private:
	string codeName;
	int score;

public:
	Agent(string codeName = "", int score = 0) {
		setCodeName(codeName);
		setScore(score);
	}

	void setCodeName(string& codeName) {
		this->codeName = codeName;
	}
	void setScore(int& score) {
		this->score = score;
	}
	string getCodeName() {
		return this->codeName;
	}
	int getScore() {
		return this->score;
	}
	
	void display() {
		cout << getCodeName() << " " << getScore() << endl;
	}
};

int main() {
	string codeName;
	int score;

	vector<Agent> agent;
	agent.reserve(5);

	for (int i = 0; i < 5; i++) {
		cin >> codeName >> score;
		agent.emplace_back(Agent(codeName, score));
	}

	int min = agent[0].getScore();
	int idx = 0;

	for (int i = 1; i < 5; i++) {
		if (agent[i].getScore() < min) {
			idx = i;
			min = agent[i].getScore();
		}
	}

	agent[idx].display();
}