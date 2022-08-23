#ifndef ZFRACTION_H_INCLUDED
#define ZFRACTION_H_INCLUDED
#include<iostream>

class ZFraction
{
public:
    ZFraction(int num=0,int den=1);
    int getNumerator() const;
    int getDenominator() const;

    ZFraction operator+(ZFraction const &autreFraction) const;
    ZFraction operator-() const;
    ZFraction operator-(ZFraction const &autreFraction) const;
    ZFraction operator*(ZFraction const &autreFraction) const;
    ZFraction operator!() const;
    ZFraction operator/(ZFraction const &autreFraction)const;

    bool operator==(ZFraction const &autreFraction)const;
    bool operator!=(ZFraction const &autreFraction)const;
    bool operator<(ZFraction const &autreFraction)const;
    bool operator<=(ZFraction const &autreFraction)const;
    bool operator>(ZFraction const &autreFraction)const;
    bool operator>=(ZFraction const &autreFraction)const;


private:
    int m_numerator;
    int m_denominator;
};

int pgcd(int a, int b);
std::ostream & operator<<(std::ostream &os, ZFraction const &fraction);
#endif // ZFRACTION_H_INCLUDED

