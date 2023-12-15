#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
    int* A_arr;
    int* B_arr;
    int n1, n2, cnt = 0;
    cin >> n1 >> n2;

    //동적할당
    A_arr = (int*)malloc(sizeof(int) * n1);
    B_arr = (int*)malloc(sizeof(int) * n2);

    //배열 초기화
    for (int i = 0; i < n1; i++) {
        cin >> A_arr[i];
    }
    for (int i = 0; i < n2; i++) {
        cin >> B_arr[i];
    }

    //i는 A_arr의 시작점
    for (int i = 0; i <= n1 - n2; i++) {
        //j는 B_arr의 시작점. A_arr 시작점 i + j
        for (int j = 0; j < n2; j++) {
            if(A_arr[i + j] == B_arr[j]) {
                cnt++;
            }
            else {
                cnt = 0;
                break;
            }
        }
        if (cnt == n2) break;
    }
    if (cnt == n2) cout << "Yes";
    else cout << "No";

    free(A_arr);
    free(B_arr);
    // 여기에 코드를 작성해주세요.
    return 0;
}