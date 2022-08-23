#include <iostream>
#include "Veh.h"
using namespace std;

Vehicule::Vehicule(int prix,int anneeProd): m_prix(prix),m_anneeDeProduction(anneeProd){
}
void Vehicule::afficher() const{
    cout<<"Ceci est un vehicule de"<<m_anneeDeProduction<<
    " qui coute "<<m_prix<<" euros."<<endl<<endl;
}

Camion::Camion(int poids, int prix,int anneeProd):Vehicule(prix,anneeProd),m_poids(poids){

}

void Camion::afficher() const{
    cout<<"Ce camion que tu vois la la, a ete fabrique en "<<m_anneeDeProduction<<"; il pese "<<
    m_poids<<"Kg et on peut s'acquerir de lui avec pas moins de "<<m_prix<<" euros.";
    cout<<"Il a "<<nombreDeRoues()<<" roues"<<endl<<endl;
}

int Camion::nombreDeRoues() const{
    return 12;
}

Voiture::Voiture(int prix, int portes,int anneeProd): Vehicule(prix,anneeProd), m_portes(portes){
}
void Voiture::afficher() const{
    cout<<"Ceci est une voiture de"<<m_anneeDeProduction<<
    " qui a "<<m_portes<<" portes et coute "<<m_prix<<" euros."<<endl;
    cout<<"Elle a "<<nombreDeRoues()<<" roues"<<endl<<endl;

}
int Voiture::nombreDeRoues() const{
    return 4;
}

Moto::Moto(int prix, int vitesseMax,int anneeProd): Vehicule(prix,anneeProd), m_vitesse(vitesseMax){
}
void Moto::afficher() const{
    cout<<"Ceci est un moto de"<<m_anneeDeProduction<<
    " qui coute "<<m_prix<<" euros avec une vitesse maximale de "<<m_vitesse<<"Km/h."<<endl;
    cout<<"Il a "<<nombreDeRoues()<<" roues"<<endl<<endl;
}
int Moto::nombreDeRoues() const{
    return 2;
}
