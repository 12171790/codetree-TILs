#include <iostream>
using namespace std;
int main() {
    int arr[2][4] = {};
    int totalSum = 0, heightSum = 0, widthSum = 0;
    double totalAvg, heightAvg, widthAvg;
    cout << fixed;
    cout.precision(1);

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
            widthSum += arr[i][j];
        }
        totalSum += widthSum;
        widthAvg = widthSum / 4.0;
        widthSum = 0;
        cout << widthAvg << " ";
    }
    cout << endl;

    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 2; i++) {
            heightSum += arr[i][j];  
        }
        heightAvg = heightSum / 2.0;
        heightSum = 0;
        cout << heightAvg << " ";
    }
    cout << endl;
    totalAvg = totalSum / 8.0;
    cout << totalAvg << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}