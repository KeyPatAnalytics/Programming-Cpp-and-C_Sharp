#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

string melangerLettres(string mot)
{
   string melange;
   int position(0);

   //Tant qu'on n'a pas extrait toutes les lettres du mot
   while (mot.size() != 0)
   {
      //On choisit un numéro de lettre au hasard dans le mot
      position = rand() % mot.size();
      //On ajoute la lettre dans le mot mélangé
      melange += mot[position];
      //On retire cette lettre du mot mystère
      //Pour ne pas la prendre une deuxième fois
        mot.erase(position, 1);
    }

   //On renvoie le mot mélangé
   return melange;
}

int main()
{
   string motMystere, motMelange, motUtilisateur;
   srand(time(0));


   cout << "Saisissez un mot" << endl;
   cin >> motMystere;

   //2 : On récupère le mot avec les lettres mélangées dans motMelange
   motMelange = melangerLettres(motMystere);

   //3 : On demande à l'utilisateur quel est le mot mystère
   do
   {
      cout << endl << "Quel est ce mot ? " << motMelange << endl;
      cin >> motUtilisateur;

      if (motUtilisateur == motMystere)
      {
         cout << "Bravo !" << endl;
      }
      else
      {
         cout << "Ce n'est pas le mot !" << endl;
      }
   }while (motUtilisateur != motMystere);
   //On recommence tant qu'il n'a pas trouvé

    return 0;
}
