/* LANG: C++ */

#include <iostream>

using namespace std;

int main() {
	int row, i, j;
  	char sign;

	cout << "Enter number: ";
  	cin >> row;
  	cout << "Enter letters: ";
  	cin >> sign;

  	for (i = row; i >= 1; --i) {
    	for (j = 1; j <= i; ++j) {
      		cout << sign;
    	}
    	cout << endl;
  	}

  	return 0;
}

