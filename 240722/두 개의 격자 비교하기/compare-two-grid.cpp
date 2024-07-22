#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int** arr1 = new int*[n];
    int** arr2 = new int*[n];
    int** arr3 = new int*[n];
    for (int i = 0; i < n; i++) {
        arr1[i] = new int[m];
        arr2[i] = new int[m];
        arr3[i] = new int[m];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr1[i][j]; 
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr2[i][j]; 
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1[i][j] == arr2[i][j]) {
                arr3[i][j] = 0;
            } else {
                arr3[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr3[i][j] << " "; 
        }
        cout << endl;
    }

    return 0;
}