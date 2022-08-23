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

void AddWorker(Worker **List, Worker *temp);
void GetWorkersInformation(Worker **List);
void OutputWantedWorkers(Worker *List, int minSal);

int main()
{
    Worker *List=NULL;
	int AverageSalary;
	cout<<"What is the normal salary? ";
	cin>>AverageSalary;
	GetWorkersInformation(&List);
	OutputWantedWorkers(List,AverageSalary);
}
void AddWorker(Worker **List, Worker *NewWorker)
{
    Worker *temp = new Worker;
    temp = NewWorker;
    temp->next = NULL;
    if(*List==NULL){
        *List = temp;
        return;
    }
    temp->next = *List;
    *List = temp;
}

void GetWorkersInformation(Worker **List)
{
	ifstream fin("WorkersInformations.txt");
	Worker *worker;
	for(int i=0; i<10; i++){
		fin>>worker->tabNumber>>worker->fio>>worker->post;
		for(int j=0; j<6; j++)
		{
			fin>>worker->salary[j];
		}
		AddWorker(List, worker);
	}
}

void OutputWantedWorkers(Worker *List, int minSal)
{
	ofstream fout("WantedList2.txt");
	int count = 0;
	Worker *worker = List;
	while(worker != NULL)
	{
		int minimalSalary = worker->salary[0];
		for(int j=0; j<6; j++)
			if(worker->salary[j] <= minimalSalary)
				minimalSalary = worker->salary[j];
		if(minimalSalary <= minSal)
		{
			count++;
			fout<<"Worker's ID: "<<worker->tabNumber<<endl;
			fout<<"Name: "<<worker->fio<<endl;
			fout<<"Post: "<<worker->post<<endl;
			fout<<"The lowest salary: "<<minimalSalary<<endl;
		}
		fout<<endl;
		worker = worker->next;
	}
	if(count == 0){
		fout<<"In our company we pay quite good!! "<<endl<<endl;
		fout<<"The salary of any employee is less than the minimal salary :):)"<<endl<<endl;
		fout<<"You will it in every company! We take care of our employees"<<endl<<endl;
}
}
