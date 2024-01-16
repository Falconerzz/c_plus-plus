/* LANG: C++ */

#include <iostream>

using namespace std;

int main() {
    int day, month, year;
    cin >> day;
    cin >> month;
    cin >> year;

    int next_day = day + 1;
    int next_month = month;
    int next_year = year;

    if (next_day > 31) {
        next_day = 1;
        next_month += 1;

        if (next_month > 12) {
            next_month = 1;
            next_year += 1;
        }
    }

    if (next_year % 4 == 0) {
        if (next_month == 2) {
            if (next_day > 29) {
                next_day = 1;
                next_month += 1;
            }
        }
    } else {
        if (next_month == 2) {
            if (next_day > 28) {
                next_day = 1;
                next_month += 1;
            }
        }
    }

    cout << next_day << endl;
    cout << next_month << endl;
    cout << next_year << endl;

    return 0;
}

