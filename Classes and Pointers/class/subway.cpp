#include<iostream>
#include<fstream>
using namespace std;
struct bus{
    int numIdBus;
    int path;
    char name[20];
    bus *next;
};
bus *tbeg, *tend;
void add(bus **tbeg, bus **tend, const bus &t);
void readFile(bus **tbeg, bus** tend);
void PrintBus(bus* beg, int path);
int main()
{
    int path;
    cout<<"Enter the path's number: ";
    cin>>path;
    readFile(&tbeg,&tend);
    PrintBus(tbeg,path);
}
void add(bus **tbeg, bus **tend, const bus &t)
{
 bus* temp = new bus;
 *temp = t;
 temp->next = 0;
 if(*tend)(*tend)->next = temp;
    else *tbeg = temp;
 *tend = temp;
}
void readFile(bus **tbeg, bus** tend)
{
    bus t;
    ifstream fin("data.txt");
     for(int i=1; i<=6;i++)
     {
         fin>>t.numIdBus>>t.path>>t.name;
         add(tbeg,tend,t);
     }
}
void PrintBus(bus* beg, int path)
{
    bus* temp = beg;
    ofstream fout("data_result.txt");
    while(temp)
    {
        if(path == temp->path)
            fout<<"Bus' number: "<<temp->numIdBus<<" Driver's name: "<<temp->name<<endl;
        temp=temp->next;
    }
}
