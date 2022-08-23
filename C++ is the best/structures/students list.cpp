#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct student{
	string Id;
	string Name;
	string Family;
	string City;
};


print_all_students(struct student list[], int N){
	for(int i=1; i<= N; i++){
		cout << i << ".) " << list[i-1].Name << " " << list[i-1].Family << ", Id: " <<  list[i-1].Id << ", City: " << list[i-1].City << endl;  
	}
}

int main(){
	
	struct student list1[3] 
			= {{"AF2021-56","Robert", "Johns","Moskva"},
				{"RU2020-102","Ivan", "Ivanov","Tula"},
				{"TZ2020-37","Sonya", "Grace","Petersburg"}};
				
	vector<struct student> list2;
	
	list2.push_back({"RU2020-102","Ivan", "Ivanov","Tula"});
	list2.push_back({"RU2021","Sergey", "Vladmirov","Samara"});
	
	cout << list2.at(0).Name <<endl;
	
	//print_all_students(list1,3);
	
	return 0;
}
