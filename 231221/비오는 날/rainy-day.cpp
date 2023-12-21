#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class BroadCast {
private:
	string date;
	string day;
	string weather;
public:
	BroadCast(string date = "0000-00-00", string day = " ", string weather = " ") {
		this->date = date;
		this->day = day;
		this->weather = weather;
	}

	string getDate() { return this->date; }

	string getWeather() { return this->weather; }

	void setDate(string& date) { this->date = date; }

	void display() {
		cout << this->date << " " << this->day << " " << this->weather << endl;
	}
};

BroadCast FirstRainyDay(vector<BroadCast>& v) {
	vector<string> strVector;
	vector<int> strDate;
	int idx = 0;
	strVector.reserve(v.size());
	for (int i = 0; i < v.size(); i++) {
		if(v[i].getWeather() == "Rain")
			strVector.emplace_back(v[i].getDate().erase(4, 1).erase(6, 1));
	}

	strDate.reserve(strVector.size());
	for (int i = 0; i < strVector.size(); i++) {
		strDate.emplace_back(stoi(strVector[i]));
	}

	int min = strDate[0];

	for (int i = 1; i < strDate.size(); i++) {
		if (min > strDate[i]) {
			min = strDate[i];
			idx = i;
		}
	}
	string minDate = to_string(strDate[idx]).insert(4, "-").insert(7, "-");

	for (int i = 0; i < v.size(); i++) {
		if (v[i].getDate() == minDate) return v[i];
	}

	return v[0];
}

int main() {
	int n;
	string date;
	string day;
	string weather;
	cin >> n;
	vector<BroadCast> v;
	v.reserve(n);

	for (int i = 0; i < n; i++) {
		cin >> date >> day >> weather;
		v.emplace_back(BroadCast(date, day, weather));
	}

	FirstRainyDay(v).display();
}