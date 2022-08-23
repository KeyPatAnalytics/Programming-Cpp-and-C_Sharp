#ifndef ARME_H_INCLUDED
#define ARME_H_INCLUDED

#include<iostream>
#include<string>

class Arme{
public:

    Arme();
    Arme(std::string nom, int degats);

    std::string getNom();
    int getDegats();
    void changer(std::string nom, int degats);
    void afficher() const;


private:

    std::string m_nom;
    int m_degats;
};

#endif // ARME_H_INCLUDED
