/* LANG: C++ */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double x, y;
  char op;
  
  cin >> x >> y;
  cin >> op;

  switch (op) {
    case '+':
      cout << x + y << endl;
      break;
    case '-':
      cout << x - y << endl;
      break;
    case '*':
      cout << x * y << endl;
      break;
    case '/':
      cout << x / y << endl;
      break;
    case '>':
      return 0;
    default:
      cout << "Invalid mark!!" << endl;
      return 0;
  }

  return 0;
}

