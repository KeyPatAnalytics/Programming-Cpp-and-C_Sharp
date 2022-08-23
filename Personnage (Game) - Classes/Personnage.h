#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED

#include<iostream>
#include<string>


class Personnage{
    /**Methods**/
public:

    Personnage(std::string nom="Lemberg");
    void recevoirDegats(int degats);
    void coupDePoing(Personnage &cible) const;
    void sePresenter() const;

    /**attributes**/
protected:

    int m_vie;
    std::string m_nom;
};

#endif // PERSONNAGE_H_INCLUDED

