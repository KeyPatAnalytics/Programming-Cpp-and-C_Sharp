#include<iostream>
#include<string>
using namespace std;
#include "template.h"
int main()
{
    int a=2,b=6;
    double x = 5.23, y=1.56;
    string myString = "My name is ";
    string yourString = "Mademoiselle";
    const char* cst1 = "azerty";
    const char* cst2 = "querty";

    int result = mini(a,b)+2;
    double z = mini(x,y)-1;
    string miniString  = mini(myString,yourString);

    cout<<result<<endl;
    cout<<z<<endl;
    cout<<miniString<<endl;
    cout<<mini<int>(a,y)<<endl; /**En ajoutant <double> ou <int> devant le template, on transforme toute les variables
                            en 'double' ou 'int', bien sur si c'est possible!!**/
    cout<<mini(cst1,cst2)<<endl;

    return 0;
}
