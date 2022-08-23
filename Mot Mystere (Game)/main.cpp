#include <iostream>
#include <string>
#include<ctime>
#include<cstdlib>
#include "Game.h"
using namespace std;

 
 
int
main (int argc, char **argv)
{
  
 
srand ((int) time (NULL));
  
 
string motSecret;
  
cout << "Entrez le mot secret: ";
  
cin >> motSecret;
cout<<"\n\n\n\n\n\n\n\n\n\n";
  
 
game (motSecret);
  
 
return 0;

}
