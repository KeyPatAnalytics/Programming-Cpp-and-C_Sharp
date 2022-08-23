#ifndef RATIONAL_H_
#define RATIONAL_H_

class Rational
{
  int numerator;
  int denominator;
public:
    Rational ();
    Rational (int num, int den);
  int getNumerator () const;
  void setNumerator (int NewNumerator);
  int getDenominator () const;
  void setDenominator (int NewDenominator);
};

#endif /* RATIONAL_H_ */
