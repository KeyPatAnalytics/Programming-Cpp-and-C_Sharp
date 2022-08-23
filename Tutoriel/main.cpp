#include <iostream>//iostream est une bibliothèque d'entrée - sortie et d'affichage

using namespace std;
int main()
{
    /*double pi(0.12);
    cout << "Que vaut le nombre pi? " << endl;
    cin >> pi;
    cin.ignore();
    cout << endl;
    cout << "Comment vous appelez-vous? " << endl;
    string nomUtilisateur("Sans nom");
    getline(cin , nomUtilisateur);
    cout << endl;
    cout << "Vous vous appelez " << nomUtilisateur <<
     " et vous pensez que le nombre pi vaut " << pi << " ." << endl;

     cout << "OPERATIONS SUR DEUX NOMBRES" << endl; cout << endl;
    cout << "Veuillez saisir les deux nombres:" << endl; cout << endl;

    double premierNomb(0), secondNomb(0), Somme(0), Quotient(0), Produit(0), Difference(0), rest(0);
    cout << "A = ";
    cin >> premierNomb; cin.ignore(); cout << endl;
    cout << "B = ";
    cin >> secondNomb; cin.ignore(); cout << endl;
    Somme = premierNomb + secondNomb;
    Difference = premierNomb - secondNomb;
    Produit = premierNomb * secondNomb;
    Quotient = premierNomb / secondNomb;
    cout << "A + B = " << Somme << endl; cout << endl;
    cout << "A - B = " << Difference << endl; cout << endl;
    cout << "A * B = " << Produit << endl; cout << endl;
    cout << "A / B = " << Quotient << endl; cout << endl;
    cout << "A % B = " << rest << endl; cout << endl;
*/
    cout << "Do you want to compare three numbers!!!?" <<endl;cout << endl;
    cout << "Enter these numbers:" << cout << endl;
    double x1, x2, x3,inter;
    cout << "A="; cin >> x1; cin.ignore(); cout << endl;
    cout << "B="; cin >> x2; cin.ignore(); cout << endl;
    cout << "C="; cin >> x3; cin.ignore(); cout << endl;
    if(x1 <= x2){x1 = x1; x2 = x2;} else {inter = x1; x1 = x2; x2 = inter;}
    if(x2 <= x3){ x2 = x2; x3 = x3;} else {inter = x2; x2 = x3; x3 = inter;}
    if(x1 <= x2){x1 = x1; x2 = x2;} else {inter = x1; x1 = x2; x2 = inter;}
    cout << x1 << " <= "<< x2 << " <= " << x3 << endl;
     return 0;

}
