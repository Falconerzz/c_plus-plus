#include <iostream>

using namespace std;

int main() {
  int n;
  int i;

  cin >> n;

  for (i = 0; i < n; i++) {
    if (i % 2 == 0) {
      cout << "0 ";
    } else {
      cout << "1 ";
    }
  }

  return 0;
}

