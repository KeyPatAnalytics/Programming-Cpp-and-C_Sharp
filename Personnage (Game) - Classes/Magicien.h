#ifndef MAGICIEN_H_INCLUDED
#define MAGICIEN_H_INCLUDED

#include <iostream>
#include <string>
#include "Personnage.h"

class Magicien : public Personnage
{
public:
    void bouleDeFeu() const;
    void bouleDeGlace() const;

private:
    int m_mana;
};




#endif // MAGICIEN_H_INCLUDED
