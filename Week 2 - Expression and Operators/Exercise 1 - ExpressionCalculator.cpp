/* LANG: C++ */

#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, e;
    
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cout << "(A+B)*(E-D)  = " << (a+b)*(e-d) << endl;
    cout << "++D+C*E  = " << ++d+c*e << endl;
    cout << "(25+A)/C+B  = " << (25+a)/c+b << endl;
    cout << "20*C+B+++D/2  = " << 20*c+b+++d/2 << endl;
    cout << "--D+C+B-- = " << --d+c+b-- << endl;
    cout << "25*D/5+10 = " << 25*d/5+10 << endl;
    cout << "A+B--+D = " << a+b--+d << endl;
    cout << "C*2+E*5 = " << c*2+e*5 << endl;
    cout << "(A*2)+B/C-15 = " << (a*2)+b/c-15 << endl;
    return 0;
}

