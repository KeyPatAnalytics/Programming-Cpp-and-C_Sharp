#include "Rational.h"
#include <stdexcept>
using namespace std;

Rational::Rational ():numerator (0), denominator (1)
{
}

Rational::Rational (int num, int den)
{
  this->setNumerator (num);
  this->setDenominator (den);
}

int
Rational::getNumerator () const
{
  return this->numerator;
}

void
Rational::setNumerator (int NewNumerator)
{
  this->numerator = NewNumerator;
}

int Rational::getDenominator () const
{
  return this->denominator;
}

void
Rational::setDenominator (int NewDenominator)
{
  if (NewDenominator == 0)
    throw runtime_error ("Never divide by 0!!");
  this->denominator = NewDenominator;
}
