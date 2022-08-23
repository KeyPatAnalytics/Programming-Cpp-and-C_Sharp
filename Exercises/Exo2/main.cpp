#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <fstream>

using namespace std;

string mix(string word)
{
    string mixed;
    int position(0);


    while (word.size() != 0)
    {

        position = rand() % word.size();

        mixed += word[position];
        word.erase(position, 1);
    }

    //On renvoie le mot mélangé
    return mixed;
}

int main()
{
    string wordMyster, wordMix, wordUsers;
    srand(time(0));
    char answer;
    int attempt(0);
    int i(0);
    char mode;
    int wordSelect(0);

    cout << "Choisissez votre mode de jeu: solo(s)/multi(m)"<<endl;
    cin >> mode;

    if(mode != 's')
    {
        cout<<"Vous avez choissis le mode de jeu multiplayer"<<endl;
        do
        {
            cout << "Saisissez un mot" << endl;
            cin >> wordMyster;
            cout << "Saisissez un nombre maximale d'essait"<<endl;
            cin >> attempt;



            wordMix = mix(wordMyster);


            do
            {
                cout << endl << "Quel est ce mot ? " << wordMix << endl;
                cin >> wordUsers;
                if (i < attempt)
                {

                    if (wordUsers == wordMyster)
                    {
                        cout << "Bravo !" << endl;
                        cout << "Voulez-vous recommencer ?: o/n"<<endl;
                        cin >> answer;
                        i++;
                    }
                    else
                    {
                        cout << "Ce n'est pas le mot !" << endl;
                        i++;
                    }
                }
                else
                {
                    cout << "Vous avez depasse "<< i << " essais"<<endl;
                    cout << "La réponse etait " <<wordMyster<<endl;

                    wordUsers = wordMyster;

                    cout << "Voulez-vous recommencer ?: o/n"<<endl;
                    cin >> answer;
                }
            }
            while (wordUsers != wordMyster);
            //On recommence tant qu'il n'a pas trouvé
        }
        while (answer != 'n');
    }

    else
    {
        do
        {

            wordSelect = rand() % 3940128;//Il s'agit du nombre de octet dans le dictionnaire
            ifstream fichier("C:/users/Dinasty/Desktop/C++/tp1/dico.txt");//Ouverture d'un fichier en lecture

            if(fichier)
            {
                cout << "Le fichier dictionnaire a ete trouve !"<<endl;
                cout << "Le mot mystere a été automatiquement pioché dans un dictionnaire " << endl;
                fichier.seekg(wordSelect, ios::beg);
                getline(fichier, wordMyster);
                cout << "Saisissez un nombre maximale d'essait"<<endl;
                cin >> attempt;



                wordMix = mix(wordMyster);


                do
                {
                    cout << endl << "Quel est ce mot ? " << wordMix << endl;
                    cin >> wordUsers;
                    if (i < attempt)
                    {

                        if (wordUsers == wordMyster)
                        {
                            cout << "Bravo !" << endl;
                            cout << "Voulez-vous recommencer ?: o/n"<<endl;
                            cin >> answer;
                            i++;
                        }
                        else
                        {
                            cout << "Ce n'est pas le mot !" << endl;
                            i++;
                        }
                    }
                    else
                    {
                        cout << "Vous avez depasse "<< i << " essais"<<endl;
                        cout << "La réponse etait " <<wordMyster<<endl;

                        wordUsers = wordMyster;

                        cout << "Voulez-vous recommencer ?: o/n"<<endl;
                        cin >> answer;
                    }
                }
                while (wordUsers != wordMyster);
                //On recommence tant qu'il n'a pas trouvé
            }
            else
            {
                cout<<"Erreur dans le chargement du fichier dictionnaire merci de changer l'adresse a la ligne 95"<<endl;
                answer = 'n';
            }
            while (answer != 'n');




        }
        while (answer != 'n');
    }



    return 0;
}
