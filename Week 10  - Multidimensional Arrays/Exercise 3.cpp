#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, m, p;
    cin >> n >> m >> p;

    string name[10][10][10];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int k = 0; k < p; ++k) {
                cin >> name[i][j][k];
            }
        }
    }

    cout << "Elements in the matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int k = 0; k < p; ++k) {
                cout << "name[" << i << "][" << j << "][" << k << "]: " << name[i][j][k] << endl;
            }
        }
    }

    cout << endl << "Elements in the matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "name[" << i << "][][]: ";
        for (int j = 0; j < m; ++j) {
            for (int k = 0; k < p; ++k) {
                cout << name[i][j][k] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

