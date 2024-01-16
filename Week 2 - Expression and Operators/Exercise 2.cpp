/* LANG: C++ */

#include <iostream>
#include <iomanip>

const float PI = 22.0/7;

using namespace std;

int main() {
  	float r,sqArea,crArea,area;

  	cin >> r;
  	
  	sqArea = (r*2) * (r*2);
  	
  	crArea = PI * r * r;
  	  	  	
  	area = sqArea - crArea;

	cout << "Area: " << setprecision(3) << area;
  	
  	return 0;
}

