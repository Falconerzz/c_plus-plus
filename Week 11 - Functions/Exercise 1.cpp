/* LANG: C++ */

#include <iostream>
#include <cctype>
using namespace std;

int isValidID(string studentID) {
    if (studentID.length() != 8) {
        return 0;
    }

    char level = toupper(studentID[0]);
    if (level != 'B' && level != 'M' && level != 'D') {
        return 0;
    }

    int checksum = ((studentID[1] - '0') * 49 + (studentID[2] - '0') * 7 +
                    (studentID[3] - '0') * 49 + (studentID[4] - '0') * 7 +
                    (studentID[5] - '0') * 49 + (studentID[6] - '0') * 7) % 10;

    int lastDigit = studentID[7] - '0';
    if (checksum != lastDigit) {
        return 0;
    }

    return 1;
}

int main() {
    string id[3];

    for (int i = 0; i < 3; i++) {
        cin >> id[i];
    }

    for (int i = 0; i < 3; i++) {
        if (isValidID(id[i])) {
            cout << "valid" << endl;
        } else {
            cout << "invalid" << endl;
        }
    }

    return 0;
}

