#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
	string str;
	cin >> str;

	sort(str.begin(), str.end());

	cout << str;
}