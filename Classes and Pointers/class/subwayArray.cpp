#include<iostream>
#include<fstream>
using namespace std;
struct bus{
    int numIdBus;
    int path;
    char name[20];
    bus *next;
};
bus tBus[6];
//void add(bus **tbeg, bus **tend, const bus &t);
void readFile();
void PrintBus(int path);
int main()
{
    int path;
    cout<<"Enter the path's number: ";
    cin>>path;
    readFile();
    PrintBus(path);
}

/*
void add(bus **tbeg, bus **tend, const bus &t)
{
 bus* temp = new bus;
 *temp = t;
 temp->next = 0;
 if(*tend)(*tend)->next = temp;
    else *tbeg = temp;
 *tend = temp;
}*/

void readFile()
{
    ifstream fin("data.txt");
     for(int i=1; i<=6;i++)
     {
         fin>>tBus[i].numIdBus>>tBus[i].path>>tBus[i].name;
     }
}
void PrintBus(int path)
{
    ofstream fout("data_resultArray.txt");
         for(int i=1; i<=6;i++)
            if(path == tBus[i].path)
                fout<<"Bus' number: "<<tBus[i].numIdBus<<" Driver's name: "<<tBus[i].name<<endl;

}
