
#include<iostream>
#include<string>
#include "Personnage.h"

using namespace std;
    Personnage::Personnage(): m_vie(100),m_mana(100)
    {

    }
    Personnage::Personnage(std::string nomArme, int degatsArme):
        m_vie(100), m_mana(100), m_arme(nomArme,degatsArme)
    {

    }
   /** Personnage::Personnage(Personnage autre):m_vie(autre.m_vie), m_mana(autre.m_mana),
    m_arme(autre.m_arme.getNom(),autre.m_arme.getDegats())
    {

    }**/
    void Personnage::recevoirDegats(int nbDegats){
        m_vie -= nbDegats;
        if(m_vie<0)
            m_vie = 0;
    }

    void Personnage::attaquer(Personnage &cible){
        cible.recevoirDegats(m_arme.getDegats());
    }

    void Personnage::boirePotionDeVie(int quantitePotion){
        m_vie += quantitePotion;
        if(m_vie>100)
            m_vie = 100;
    }
    void Personnage::changerArme(string nomNouvelleArme,int degatsNouvelleArme){
        m_arme.changer(nomNouvelleArme,degatsNouvelleArme);
    }
    bool Personnage::estVivant(){
        return m_vie>0;
    }
    void Personnage::afficherEtat()
    {
        cout<<"Vie : "<<m_vie<<endl;
        cout<<"Mana : "<<m_mana<<endl;
        m_arme.afficher();
    }

    std::string Personnage::getNomArme(){
        return m_arme.getNom();
    }
    int Personnage::getDegatsArme(){
        return m_arme.getDegats();
    }

