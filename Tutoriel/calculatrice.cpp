#include(iostream)
using namespace std;

int main()
{
    cout << "SOMME DE DEUX NOMBRES" << endl; cout << endl;
    cout << "Veuillez saisir les deux nombres:" << endl; cout << endl;
    double premierNomb(0), secondNomb(0), Somme(0);
    cout << "A = ";
    cin >> premierNomb; cin.ignore(); cout << endl;
    cout << "B = ";
    cin >> secondNomb; cin.ignore(); cout << endl;
    Somme = premierNomb + secondNomb;
    cout << "A + B = " << Somme << endl;
}
