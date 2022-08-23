#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
    ZFraction a(4,3);
    ZFraction b(11,2);
    ZFraction c,d;

    c = a+b;

    d = a*b;

    //int mypgcd = pgcd(4,54);

    cout << a << " + " << b << " = " << c << endl;

    cout << a << " * " << b << " = " << d << endl;

    if(a > b)
        cout << "a est plus grand que b." << endl;
    else if(a==b)
        cout << "a est egal a b." << endl;
    else
        cout << "a est plus petit que b." <<endl;
        //cout <<mypgcd<<endl;
    return 0;
}
