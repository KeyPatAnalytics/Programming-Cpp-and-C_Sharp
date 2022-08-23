#include <iostream>
#include "Duree.h"
using namespace std;

int main()
{
    Duree time1(2,305,1025), time2(0,247,4598);
    cout<<"Duree 1: ";
    time1.afficher();
    cout<<" ( "<<time1.dureeSecondes()<<" s )"<<endl;
    time1+=30;
    cout<<"time1 changed: "; time1.afficher();cout<<endl;
    cout<<"Duree 2: ";
    time2.afficher();
    cout<<" ( "<<time2.dureeSecondes()<<" s )"<<endl;
    if(time1 == time2) cout<<"Les deux durees sont egales."<<endl;
    if(time1 != time2) cout<<"Les deux durees sont differentes."<<endl;
    if(time1 < time2) cout<<"Time1 < Time2"<<endl;
    if(time1 > time2) cout<<"Time1 > Time2"<<endl;

    Duree sommeDurees = time1 + time2;
    cout<<"Somme des deux durees: ";
    sommeDurees.afficher();
    return 0;
}
