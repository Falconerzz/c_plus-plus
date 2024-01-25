/* LANG: C++ */

#include <iostream>

using namespace std;

int main() {
    int num[6];
    int even[6], odd[6];
    int i, j = 0, k = 0;
    int rem;

    for (i = 0; i < 6; ++i) {
        cin >> num[i];
    }

    for (i = 0; i < 6; ++i) {
        rem = num[i] % 2;
        if (rem == 0) {
            even[j++] = num[i];
        } else {
            odd[k++] = num[i];
        }
    }

    cout << "Even = ";
    for (i = 0; i < j; ++i) {
        cout << even[i] << " ";
    }
    cout << endl;

    cout << "Odd = ";
    for (i = 0; i < k; ++i) {
        cout << odd[i] << " ";
    }
    cout << endl;

    return 0;
}

