/* LANG: C++ */

#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int start_num, end_num;

    cin >> start_num;

    while (start_num < 1 || start_num > 10000) {
        cin >> start_num;
    }

    cin >> end_num;

    while (end_num < 1 || end_num > 10000 || end_num < start_num) {
        cin >> end_num;
    }

    int count = 0;

    for (int i = start_num; i <= end_num; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
            count++;
        }
    }
    
    cout << endl;

    cout << count << endl;

    return 0;
}
