#include<iostream>

#include "Duree.h"
using namespace std;

Duree::Duree(int hours, int minutes, int secondes)
    {
        minutes += secondes/60;
        secondes %= 60;
        hours += minutes/60;
        minutes %= 60;
        m_hours = hours;
        m_minutes = minutes;
        m_secondes = secondes;
    }

void Duree::afficher() const{
  cout<<m_hours<<" heures "<<m_minutes<<" minutes "
  <<m_secondes<<" secondes ";
}

int Duree::dureeSecondes() const{
    return (m_hours*3600+m_minutes*60+m_secondes);
}
bool Duree::operator==(Duree const &timeline) const{
    return (dureeSecondes() == timeline.dureeSecondes());
}
bool Duree::operator!=(Duree const &timeline) const{
    return !(*this == timeline);
}
bool Duree::operator<(Duree const &timeline) const{
    return (dureeSecondes() < timeline.dureeSecondes());
}
bool Duree::operator>(Duree const &timeline) const{
    return (*this != timeline && !(*this < timeline));
}
Duree Duree::operator+(Duree const &time) const{
    int sumSecondes = dureeSecondes() + time.dureeSecondes();
    return Duree(0,0,sumSecondes);
}
Duree Duree::operator+(int sec){
    int newSec = dureeSecondes() + sec;
    return Duree(0,0,newSec);
}
Duree Duree::operator+=(int sec){
    *this = Duree(0,0,dureeSecondes()+sec);
    return *this;
}

