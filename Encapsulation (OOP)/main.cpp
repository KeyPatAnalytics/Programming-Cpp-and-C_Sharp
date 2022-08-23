#include <iostream>

using namespace std;

#include "Rational.h"

int main ()
{
  Rational myRat;
  //myRat.setNumerator(1);
  //myRat.setDenominator(2);
  double rat =
    (double) myRat.getNumerator () / (double) myRat.getDenominator ();

  cout << myRat.getNumerator () << "/" << myRat.getDenominator ();
  cout << " = " << rat << endl;
  return 0;
}
