/* LANG: C++ */

#include <iostream>

using namespace std;

int main() {
    double tHB, uSD, jPY, eUR, gBP, cNY;

	cout << "Amount to convert (THB): ";
    cin >> tHB;
    uSD = tHB * 0.0301;
    jPY = tHB * 3.3713;
    eUR = tHB * 0.0256;
    gBP = tHB * 0.0224;
    cNY = tHB * 0.1998;
    cout << uSD << " USD" << endl;
    cout << jPY << " JPY" << endl;
    cout << eUR << " EUR" << endl;
    cout << gBP << " GBP" << endl;
    cout << cNY << " CNY" << endl;
    return 0;
}
