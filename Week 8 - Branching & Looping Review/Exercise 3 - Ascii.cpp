/* LANG: C++ */

#include <iostream>

using namespace std;

int main() {
    int start_ascii, end_ascii;

    cin >> start_ascii;

    while (start_ascii < 50 || start_ascii > 120) {
        cin >> start_ascii;
    }

    cin >> end_ascii;

    while (end_ascii < 50 || end_ascii > 120 || end_ascii <= start_ascii) {
        cin >> end_ascii;
    }

    int count = 0;
    for (int i = start_ascii; i <= end_ascii; ++i) {
        cout << i << "='" << static_cast<char>(i) << "' ";
        count++;
        if (count == 6) {
            cout << endl;
            count = 0;
        }
    }

    return 0;
}

