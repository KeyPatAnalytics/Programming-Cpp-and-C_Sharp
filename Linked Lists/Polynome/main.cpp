#include <iostream>

using namespace std;
#include "Polynome.h"

int main()
{
 const int n=2;
 double A[n];
 for(int i=0; i<n; i++)
    A[i]= (double)i;
Polynome P(1,A);
cout<<P<<endl;
Polynome L = P.derivate();
Polynome Q = -L.derivate();
Polynome R = Q.derivate();
Polynome S=L+Q;
Polynome Pro=P*L;
cout<<L<<endl<<Q<<endl<<R<<endl<<S<<endl<<Pro<<endl;
P.~Polynome();
L.~Polynome();
Q.~Polynome();
R.~Polynome();
S.~Polynome(); Pro.~Polynome();
    return 0;
}
