#include<iostream>
#include<stdexcept>
#include "ZFraction.h"
using namespace std;

ZFraction::ZFraction(int num,int den){
    if(den==0)
    throw runtime_error("0 can not be the denominator!");

     else {
        if(den>0){
            m_numerator=num;
            m_denominator=den;
        }
        if(den<0){
            m_numerator=(-1)*num;
            m_denominator=(-1)*den;
        }

    }
}
int ZFraction::getNumerator()const{
    return m_numerator;
}
int ZFraction::getDenominator()const{
    return m_denominator;
}

ZFraction ZFraction::operator+(ZFraction const &autreFraction) const{
    return ZFraction(
                     m_numerator*autreFraction.m_denominator + m_denominator*autreFraction.m_numerator,
                     m_denominator*autreFraction.m_denominator);
}
ZFraction ZFraction::operator-() const{
    return ZFraction((-1)*m_numerator,m_denominator);
}
ZFraction ZFraction::operator-(ZFraction const &autreFraction) const{
    ZFraction sousFract = -autreFraction;
    sousFract = (*this)+sousFract;
    return sousFract;
}
ZFraction ZFraction::operator*(ZFraction const &autreFraction) const{
    return ZFraction(
                     m_numerator*autreFraction.m_numerator,
                     m_denominator*autreFraction.m_denominator);
}
ZFraction ZFraction::operator/(ZFraction const &autreFraction)const{
    return ZFraction(
                     m_numerator*autreFraction.m_denominator,
                     m_denominator*autreFraction.m_numerator);
}
ZFraction ZFraction::operator!() const{
    return ZFraction(m_denominator,m_numerator);
}

bool ZFraction::operator==(ZFraction const &autreFraction)const{
    return m_numerator*autreFraction.m_denominator == m_denominator*autreFraction.m_numerator;
}
bool ZFraction::operator!=(ZFraction const &autreFraction)const{
    return !(*this==autreFraction);
}
bool ZFraction::operator<(ZFraction const &autreFraction)const{
    return m_numerator*autreFraction.m_denominator < m_denominator*autreFraction.m_numerator;
}
bool ZFraction::operator<=(ZFraction const &autreFraction)const{
    return !(*this>autreFraction);
}
bool ZFraction::operator>(ZFraction const &autreFraction)const{
    return m_numerator*autreFraction.m_denominator > m_denominator*autreFraction.m_numerator;
}
bool ZFraction::operator>=(ZFraction const &autreFraction)const{
    return !(*this<autreFraction);
}

ostream & operator<<(ostream &os, ZFraction const &fraction)
{
    if(fraction.getNumerator()==0) os<<"0";
    else if(fraction.getDenominator()==1) os<<fraction.getNumerator();
    else os<<fraction.getNumerator()<<"/"<<fraction.getDenominator();
   return os;
}

int pgcd(int a, int b){
    while(b!=0){
        const int t=b;
        b = a%b;
        a=t;
    }
    return a;
}




