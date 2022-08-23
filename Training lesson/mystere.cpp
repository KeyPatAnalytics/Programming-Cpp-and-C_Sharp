#include <ctime>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <vector>
#include "mystere.h"

using namespace std;

string charge_word(string const& fichier){
    ifstream flux(fichier.c_str());
    if(flux){
        string mot;
        vector<string> mots;
        while(flux >> mot){
            mots.push_back(mot);
        }
        int randomPos(rand() % mots.size());
        return mots[randomPos];
    }
    else{
        cout << "ERREUR : Impossible d'ouvrir le fichier" << endl;
        return "";
    }
}

string randomize(string original){
    string copie;
    int const size(original.size());
    srand(time(0));

    // Rempli la variable copie avec des lettres pioché au hasard dans original
    for(int i(0); i < size; ++i){

        int randomPos(rand() % original.size());
        copie += original[randomPos];
        original.erase(randomPos,1);
    }
    return copie;
}

double score(vector<int> historique){
    int somme = 0;
    for(int i(0); i < (int)historique.size(); ++i) somme += historique[i];
    double mean = somme/historique.size();

    cout << "Votre score : " << mean << endl;

    return mean;
}

void game(){
    string replay;
    vector<int> historique;
    do{
        int nbTour(5);
        string original, tentative, melange;

        // Demande de saisir un mot.
        /*
        cout << "Saisissez un mot :" << endl;
        cin >> original;
        //*/
        original = charge_word("words.txt");

        // Mélange le mot mystère.
        melange = randomize(original);

        // Laisse 3 tentative au joueur pour trouver ce mot.
        do{
            cout << endl << "Quel est ce mot ? " << endl << melange << endl;
            cin >> tentative;

            if(tentative != original){
                cout << "Ce n'est pas le mot !" << endl;
                --nbTour;
            }
        }while (nbTour > 0 && original != tentative);

        if(tentative == original) cout << "Bravo !" << endl;
        else cout << "Perdu !" << endl << "Le mot mystère était : " << original << endl;

        historique.push_back(nbTour);

        cout << endl << "Voulez vous rejouer ? " << endl;
        cin >> replay;


    } while(replay == "yes");

    score(historique);
}
