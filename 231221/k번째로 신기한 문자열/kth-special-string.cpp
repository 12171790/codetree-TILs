#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string kString(vector<string>& strVector, string& targetStr, int& k) {
	int cnt = 0, idx = 0;
	vector<string> startTargetStr;
	startTargetStr.reserve(strVector.size());

	for (int i = 0; i < strVector.size(); i++) {
		for (int j = 0; j < targetStr.length(); j++) {
			if (strVector[i][j] == targetStr[j]) cnt++;
			else break;
		}
		if (cnt == targetStr.length()) startTargetStr.emplace_back(strVector[i]);
		cnt = 0;
	}
	sort(startTargetStr.begin(), startTargetStr.end());
    
	return startTargetStr[k - 1];
}

int main() {
	int n, k;
	string elem;
	string targetStr;
	vector<string> strVector;
	cin >> n >> k;
	strVector.reserve(n);
	cin >> targetStr;

	for (int i = 0; i < n; i++) {
		cin >> elem;
		strVector.emplace_back(elem);
	}

	cout << kString(strVector, targetStr, k) << endl;
	return 0;
}