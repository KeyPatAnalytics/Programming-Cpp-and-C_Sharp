#include<iostream>
#include "Personnage.h"

using namespace std;

Personnage::Personnage(std::string nom):m_vie(100),m_nom(nom){
}
void Personnage::recevoirDegats(int degats){
    m_vie -= degats;
}
void Personnage::coupDePoing(Personnage &cible) const{
    cible.recevoirDegats(10);
}
void Personnage::sePresenter() const{
    cout<<"Bonjour, Je m'appelle "<<m_nom<<"."<<endl;
    cout<<"J'ai encore "<<m_vie<<" points de vie."<<endl;
}
