#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int n, m, num = 1; //배열에 넣을 값 num
    int** arr;
    cin >> n >> m;

    arr = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = (int*)malloc(sizeof(int) * m);
    }

    //i는 맨 왼쪽 위부터 맨 오른쪽 아래까지 순차적으로 가기 위해 n+m-1까지
    for (int i = 0; i < n + m - 1; i++) {
        for (int j = 0; j <= i; j++) {
            //조건문이 중요
            //arr[i][i - j]에 값을 넣는데 이때 각각의 index가
            //주어진 n, m의 크기를 벗어나면 for문을 다시 실행하여 값을 조정
            if(j >= n || i - j >= m) continue;
            arr[j][i - j] = num;
            num++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
// 00
// 01 10
// 02 11 20
// 03 12 21 30
// 04 13 22 31
// 05 14 23 32
// 15 24 33
// 25 34
// 35

    // 여기에 코드를 작성해주세요.
    return 0;
}