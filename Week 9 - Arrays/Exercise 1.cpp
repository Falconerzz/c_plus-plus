/* LANG: C++ */

#include <iostream>

using namespace std;

int main() {
    const int size = 100;
    int num[size];
    int n, i;
    double avg = 0;

    cin >> n;
    cin >> num[0];
    int max = num[0];
    int min = num[0];

    avg += num[0];

    for (i = 1; i < n; ++i) {
        cin >> num[i];

        avg += num[i];

        if (num[i] > max) {
            max = num[i];
        }

        if (num[i] < min) {
            min = num[i];
        }
    }

    avg /= n;

    cout << "Avg = " << avg << endl;
    cout << "Max = " << max << endl;
    cout << "Min = " << min << endl;

    return 0;
}

