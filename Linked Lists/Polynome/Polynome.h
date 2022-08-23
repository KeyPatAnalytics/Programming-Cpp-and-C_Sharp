#ifndef POLYNOME_H_INCLUDED
#define POLYNOME_H_INCLUDED
#include<iostream>

class Polynome{
    int degre;
    double* X;
public:
    Polynome(int deg=0, double* coef=NULL);
    ~Polynome();

    int getDegre();
    double* getCoefX();

    Polynome derivate() const;
    Polynome integral() const;

    Polynome operator+(Polynome const&) const;
    Polynome operator-() const;
    friend Polynome operator-(Polynome const&, Polynome const&);
    Polynome operator*(int) const;
    Polynome operator*(Polynome const&) const;
    void Print(string,Polynome&);

};
    std::ostream& operator<<(std::ostream&, Polynome &);


#endif // POLYNOME_H_INCLUDED
