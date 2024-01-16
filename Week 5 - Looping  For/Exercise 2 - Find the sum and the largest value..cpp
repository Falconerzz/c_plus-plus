/* LANG: C++ */

#include <iostream>

using namespace std;

int main() {
	int n,x,i,sum=0,max=0;

  	cin >> n;

  	for (i = 0; i < n; i++) {
    	cin >> x;
    	sum += x;
    	if (x > max) {
      		max = x;
    	}
  	}

  	cout << "sum: " << sum << endl;
  	cout << "The largest number: " << max << endl;
  	
  	return 0;
}

