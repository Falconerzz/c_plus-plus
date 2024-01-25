/* LANG: C++ */

#include <iostream>

using namespace std;

int main() {
    int scores[2][5];
    int sumcolumns[5] = {0};

    int i, j;

    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 5; ++j) {
            cin >> scores[i][j];
        }
    }

    for (j = 0; j < 5; ++j) {
        for (i = 0; i < 2; ++i) {
            sumcolumns[j] += scores[i][j];
        }
    }

    for (j = 0; j < 5; ++j) {
        cout << sumcolumns[j] << " ";
    }

    return 0;
}

