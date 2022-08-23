#ifndef GUERRIER_H_INCLUDED
#define GUERRIER_H_INCLUDED

#include<iostream>
#include<string>
#include "Personnage.h"

class Guerrier : public Personnage
{
public:
    Guerrier(std::string nom);
    void frapperCommeUnSourdAvecUnMarteau() const;
    void sePresenter() const;

};
#endif // GUERRIER_H_INCLUDED
