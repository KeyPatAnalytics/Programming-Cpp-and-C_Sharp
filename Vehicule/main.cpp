#include <iostream>
#include "Veh.h"
#include <vector>
using namespace std;

void presenter(Vehicule const& veh);
int main()
{
   vector<Vehicule*> listeDeVehicules;

   // listeDeVehicules.push_back(new Vehicule(2000));
    listeDeVehicules.push_back(new Voiture(10000,17));
    listeDeVehicules.push_back(new Moto(1200, 270));
    listeDeVehicules.push_back(new Camion(2500,20000,2012));

    for(unsigned int i(0); i<listeDeVehicules.size(); i++){
        listeDeVehicules[i]->afficher();
    }

    for(unsigned int i(0); i<listeDeVehicules.size(); i++){
        delete[] listeDeVehicules[i];
        listeDeVehicules[i]=0;
    }

    return 0;
}

void presenter(Vehicule const& veh){
    veh.afficher();
}
