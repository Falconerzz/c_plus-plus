/* LANG: C++ */

#include <iostream>

using namespace std;

int main() {
  	int num,a,b,c,d;
  	
  	cin >> num;
  	
  	a = num / 1000;
  	b = (num / 100) % 10;
  	c = (num / 10) % 10;
  	d = num % 10;
  	
  	num = a+b+c+d;
  	
  	cout << a << "+" << b << "+" << c << "+" << d << "=" << num << endl;

  	return 0;
}

