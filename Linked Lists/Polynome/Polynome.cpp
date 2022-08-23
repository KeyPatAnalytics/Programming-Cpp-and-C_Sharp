#include<iostream>
using namespace std;
#include "Polynome.h"
#include<cstring>

int Polynome::getDegre(){
    return degre;
}
double* Polynome::getCoefX(){
    return X;
    }

Polynome::Polynome(int deg, double* coef){
    degre = deg;
    X = new double[deg+1];
    for(int i=0; i<=deg; i++){
        X[i] = coef[i];
    }
}
Polynome::~Polynome(){
    delete[] X;
    }

Polynome Polynome::derivate() const
{
    int derivateDegre;
    double* derivateCoef;
    if(degre==0){ derivateDegre=0;derivateCoef = new double[1]; *derivateCoef = 0;}
    else{
        derivateDegre = degre-1;
        derivateCoef = new double[degre];
        for(int i=0; i<degre; i++)
            derivateCoef[i] = X[i+1]*(i+1);
    }
    return Polynome(derivateDegre,derivateCoef);
}

Polynome Polynome::integral() const
{

}
Polynome Polynome::operator+(Polynome const& P) const
{
    int sumDegre;
    double* sum;
    int i=0;

    if(degre<P.degre){
        sumDegre = P.degre;
        sum = new double[P.degre+1];
        while(i<=degre){
        sum[i] = X[i]+P.X[i];
        i++;
        }
        while(i<=P.degre){
            sum[i] = P.X[i];
            i++;
        }
    }
    else{
        sumDegre = degre;
        sum = new double[degre+1];
        while(i<=P.degre){
        sum[i] = X[i]+P.X[i];
        i++;
        }
        while(i<=degre){
            sum[i] = X[i];
            i++;
        }
    }

    return Polynome(sumDegre,sum);

}
Polynome Polynome::operator-() const
{
    double* opposite = new double[degre];
    for(int i=0; i<=degre; i++)
        opposite[i] = (-1)*X[i];
    return Polynome(degre, opposite);
}
Polynome operator-(Polynome const& R, Polynome const&P)
{
    Polynome Q, Diff;
    Q = -P;
    Diff = R+Q;
    Q.~Polynome();
    return Diff;
}
Polynome Polynome::operator*(int k) const
{
    double* product = new double[degre];
    for(int i=0; i<=degre; i++)
        product[i] = k*X[i];
    return Polynome(degre,product);
  }

Polynome Polynome::operator*(Polynome const& P) const
{
    int smallDegre, productDegre = degre+P.degre;
 double* a, *b, *product;/**We'll copy in the variable 'a' the shortest polynomial
                            and in 'b' the longest one**/

 if(degre<P.degre){

        a = new double[degre+1];
         b = new double[P.degre+1];
         for(int i=0; i<=degre; i++)
            a[i] = X[i];
        for(int i=0; i<=P.degre; i++)
            b[i] = P.X[i];
            smallDegre=degre;
 }
 else{
     a = new double[P.degre+1];
     b = new double[degre+1];
     for(int i=0; i<=P.degre; i++)
        a[i] = P.X[i];
    for(int i=0; i<=degre; i++)
        b[i] = X[i];
    smallDegre=P.degre;
 }
 int i=0;
 product = new double[productDegre+1];
while(i<=smallDegre){
    product[i]=0;
    for(int j=0;j<=i;j++)
        product[i] += a[j]*b[i-j];
        i++;
}
while(i<=productDegre){
    product[i] = 0;
    for(int j=0; j<=smallDegre; j++)
        product[i] += a[j]*b[i-j];
    i++;
}
 delete[] a; delete[] b;
 return Polynome(productDegre,product);
 }
ostream& operator<<(ostream& os, Polynome& P)
{
    int n = P.getDegre();
    double* p = P.getCoefX();
    os<<"[";
    for(int i=0;i<n;i++)
        os<<p[i]<<"  ";
    os<<p[n]<<"]";
    return os;
}
void Polynome::Print(string output, Polynome& P)
{
 cout<<output<<": ";
 cout<<P<<endl;
}
