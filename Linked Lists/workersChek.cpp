#include<iostream>
#include<fstream>

using namespace std;

struct Worker{
	int tabNumber;
	char fio[20];
	char post[20];
	int salary[6];
	Worker* next;
};

Worker worker[10];

void GetWorkersInformation();
void OutputWantedWorkers(int minSal);

int main()
{
	int MiddleSalary;
	cout<<"What is the normal salary? ";
	cin>>MiddleSalary;
	GetWorkersInformation();
	OutputWantedWorkers(MiddleSalary);
}

void GetWorkersInformation()
{
	ifstream fin("WorkersInformations.txt");
	for(int i=0; i<10; i++){
		fin>>worker[i].tabNumber>>worker[i].fio>>worker[i].post;
		for(int j=0; j<6; j++)
		{
			fin>>worker[i].salary[j];
		}
	}
}	
void OutputWantedWorkers(int minSal)
{
	ofstream fout("WantedList.txt");
	int count = 0;
	for(int i=0; i<10; i++)
	{
		int minimalSalary = worker[i].salary[0];
		for(int j=0; j<6; j++)
			if(worker[i].salary[j] <= minimalSalary)
				minimalSalary = worker[i].salary[j];
		if(minimalSalary <= minSal)
		{
			count++;
			fout<<"Worker's ID: "<<worker[i].tabNumber<<endl;
			fout<<"Name: "<<worker[i].fio<<endl;
			fout<<"Post: "<<worker[i].post<<endl;
			fout<<"The lowest salary: "<<minimalSalary<<endl;
		}
		fout<<endl;
	}
	if(count == 0){
		fout<<"In our company we pay quite good!! "<<endl<<endl;
		fout<<"The salary of any employee is bigger than the minimal salary :):)"<<endl<<endl;
		fout<<"You will it in every company! We take care of our employees"<<endl<<endl;
}
}
