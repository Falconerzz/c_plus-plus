/* LANG: C++ */
#include <iostream>

using namespace std;

int main() {
    int num1;
    int num2;
    int rem1;
    int rem2;

    cin >> num1;
    cin >> num2;
    rem1 = num1 % 2;
    rem2 = num2 % 2;
    if (rem1 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
    if (rem2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
    return 0;
}
