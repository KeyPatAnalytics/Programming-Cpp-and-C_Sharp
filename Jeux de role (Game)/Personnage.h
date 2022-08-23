#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED

#include<iostream>
#include<string>
#include "Arme.h"

class Personnage{
    /**Methods**/
public:

    Personnage();
    Personnage(std::string nomArme, int degatsArme);
//    Personnage(Personnage autre);
    ~Personnage(){
    }
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    std::string getNomArme();
    int getDegatsArme();
    void changerArme(std::string nomNouvelleArme,int degatsNouvelleArme);
    bool estVivant();

    void afficherEtat();


    /**attributes**/
private:

    int m_vie;
    int m_mana;
    Arme m_arme;
};

#endif // PERSONNAGE_H_INCLUDED
