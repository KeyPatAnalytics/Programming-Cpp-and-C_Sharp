#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;
int random(int Min, int Max);

int main()
{
    srand((int)time(NULL));
    ifstream readDico("dico.txt");
    if(readDico){
        string mystryWord;
        getline(readDico, mystryWord);
        cout<<mystryWord<<endl;

        readDico.seekg(0,ios::end);
        int dicoSize = readDico.tellg();
        cout<<dicoSize<<endl;
        int newPosition = random(0,dicoSize);
        cout<<"Mystery position: "<<newPosition<<endl;
        readDico.seekg(newPosition,ios::beg);
        readDico>>mystryWord;
        readDico>>mystryWord; /**or getline(readDico, mystryWord);**/
        cout<<mystryWord<<endl;
    }
    else
        cout<<"ERROR: Impossible to read dico.txt";
    return 0;
}

int random(int Min, int Max){
    return (rand()%(Max-Min+1))+Min;
}
