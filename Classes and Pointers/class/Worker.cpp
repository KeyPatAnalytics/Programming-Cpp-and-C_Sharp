#include<iostream>
#include<vector>
#include "ClassWorker.h"
using namespace std;
int main()
{
    Worker employee;
    string name;
    vector<int>average_balls;

    cout<<"Your name: "; cin>>name;
    cout<<"Your academic performance for 6 months: "<<endl;

    for(int i=0; i<6; i++){
        int one_score;
        cout<<i+1<<".) "; cin>>one_score;
        average_balls.push_back(one_score);
    }
    employee.set_name(name);
    employee.set_academic_performance(average_balls);

    employee.discover_avarage_AP();
    cout<<endl<<employee.get_name()<<endl;
    cout<<"Average academic performance: "<<employee.get_avarage_AP()<<endl;

    return 0;
}
