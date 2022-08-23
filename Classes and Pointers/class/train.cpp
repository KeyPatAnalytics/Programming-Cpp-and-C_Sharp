#include<iostream>
#include<fstream>

using namespace std;
struct train{
    int numTrain;
    char destination[20];
    int time;
    train* next;
};
train tTrain[6];
void ReadFile();
void PrintTrain(int time1, int time2);

int main()
{
    int time1, time2;
    cout <<"Enter the interval of time, in which you want to travel: "<<endl;
    cout << "Time1: "; cin>>time1;
    cout << "Time2: "; cin>>time2;
    ReadFile();
    PrintTrain(time1,time2);
    return 1;
}

void ReadFile()
{
    ifstream fin("train_data.txt");
    for(int i=0; i<6; i++)
        fin>>tTrain[i].numTrain>>tTrain[i].destination>>tTrain[i].time;
}

void PrintTrain(int time1, int time2)
{
    int count = 0;
    ofstream fout("train_List.txt");
    for(int i=0; i<6; i++){
       if(tTrain[i].time >= time1 && tTrain[i].time <= time2){
        fout<<"Train Number "<<tTrain[i].numTrain<<endl;
        fout<<"Destination: "<<tTrain[i].destination<<"\n";
        fout<<"Date: "<<tTrain[i].time<<endl<<endl;
        count++;
       }
    }
    if(!count){
      fout<<"Unfortunately there is not any train, which will not leave on these days :(\n";
      fout<<"Try another day.";
    }

}
