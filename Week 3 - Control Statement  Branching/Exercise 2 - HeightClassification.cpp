/* LANG: C++ */

#include <iostream>

using namespace std;


int main() {
    int height;

    cin >> height;
    if (height < 150) {
        cout << "Dwarf" << endl;
    } else {
        if (height < 165) {
            cout << "Standard Height" << endl;
        } else {
            if (height < 190) {
                cout << "Taller" << endl;
            } else {
                cout << "Abnormal Height" << endl;
            }
        }
    }
    return 0;
}
