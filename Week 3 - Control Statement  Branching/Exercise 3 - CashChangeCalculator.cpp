/* LANG: C++ */

#include <iostream>

using namespace std;

int main() {
    int cash,total,change;
    
    cin >> cash;
	cin >> total;

    change = cash - total;

    if (change >= 500) {
        int banknote500 = change / 500;
        cout << "500 " << banknote500 << endl;
        change %= 500;
    }

    if (change >= 100) {
        int banknote100 = change / 100;
        cout << "100 " << banknote100 << endl;
        change %= 100;
    }

    if (change >= 1) {
        cout << "1 " << change << endl;
    }

    return 0;
}

