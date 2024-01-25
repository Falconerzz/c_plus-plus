/* LANG: C++ */

#include <iostream>

using namespace std;

int main() {
    int matrix1[5][5], matrix2[5][5];
    int n, m;
    
    cin >> n;
    cin >> m;

    double avg;

    int i, j;

    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            cin >> matrix1[i][j];
        }
    }

    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            cin >> matrix2[i][j];
        }
    }

    for (i = 0; i < n; ++i) {
        avg = 0.0;
        for (j = 0; j < m; ++j) {
            avg = (matrix1[i][j] + matrix2[i][j]) / 2.0;
            cout << avg << " ";
        }
        cout << endl;
    }


    return 0;
}

