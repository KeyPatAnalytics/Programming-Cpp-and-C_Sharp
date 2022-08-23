#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include <fstream>
#include <ctime>

using namespace std ;

int main()
{
    srand(time(0)) ;




    bool rejouer(true) ;
    while (rejouer == true)
    {

    // Flux
    string nomFlux("dico.txt") ;
    ifstream monFlux(nomFlux.c_str()) ;
    if (monFlux)
    {
        cout << "Le flux est pret a etre utilise." << endl ;
    }
    else
    {
        cout << "Il y a un probleme de lecture du fichier." << endl ;
    }

    // Choix du mot
    string mot, a ;
    int i(0), k ;
    k = rand() % 323577 ;
    while (getline(monFlux,a))
    {
        if (i == k)
        {
            mot = a ;
        }
        i ++ ;
    }

    // Mélange des lettres
    string mot2, mot3 ;
    mot3 = mot ;
    int n, L, L3 ;
    L = mot.length() ;
    for(int i(0) ; i < L ; i++)
    {
        L3 = mot3.length() ;
        n = rand() % L3 ;
        mot2 += mot3[n] ;
        mot3.erase(n,1) ;
    }
    cout << "Le mot mystere est : " << mot2 << endl ;

    // Boucle test
    mot3 = " " ;
    int essai(0) ;
    while (mot3 != mot && essai < 5)
    {
        cout << "Quel est le mot ?" << endl ;
        cin >> mot3 ;
        essai++ ;
    }
    if (mot3 == mot)
    {
        cout << "Bravo ! Vous avez trouve le mot mystere !" << endl ;
    }
    else
    {
        cout << "Vous n'avez pas trouve le mot mystere." << endl ;
    }
    cout << "Voulez-vous refaire une partie ?" << endl ;
    cin >> rejouer ;
    }

    cout << "Merci d'avoir joue." << endl ;
    return 0 ;
}
