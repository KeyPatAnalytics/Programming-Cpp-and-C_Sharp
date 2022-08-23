#include<iostream>
#include<string>
#include "Guerrier.h"

using namespace std;

Guerrier::Guerrier(std::string nom):Personnage(nom){
}
void Guerrier::sePresenter() const{
    Personnage::sePresenter();
    cout<<"Je suis un vaillant guerrier!"<<endl;
}

