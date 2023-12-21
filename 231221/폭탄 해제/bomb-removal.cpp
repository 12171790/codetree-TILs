#include <iostream>
#include <string>
#include <vector>
using namespace std;

class TimeBomb {
private:
	string releaseCode;
	char colorOfLine;
	int limitTime;

public:
	TimeBomb(string releaseCode, char colorOfLine, int limitTime) {
		setReleaseCode(releaseCode);
		setColorOfLine(colorOfLine);
		setLimitTime(limitTime);
	}

	void setReleaseCode(string& releaseCode) {
		this->releaseCode = releaseCode;
	}

	void setColorOfLine(char& colorOfLine) {
		this->colorOfLine = colorOfLine;
	}

	void setLimitTime(int& limitTime) {
		this->limitTime = limitTime;
	}

	string getReleaseCode() {
		return this->releaseCode;
	}

	char getColorOfLine() {
		return this->colorOfLine;
	}

	int getLimitTime() {
		return this->limitTime;
	}

	void display() {
		cout << "code : " << getReleaseCode() << endl;
		cout << "color : " << getColorOfLine() << endl;
		cout << "second : " << getLimitTime() << endl;
	}
};

int main() {
	string releaseCode;
	char colofOfLine;
	int limitTime;

	cin >> releaseCode >> colofOfLine >> limitTime;
	TimeBomb bomb(releaseCode, colofOfLine, limitTime);
	bomb.display();
}