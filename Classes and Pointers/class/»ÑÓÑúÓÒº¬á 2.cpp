//Karpov Aleksey, NK-101,09.04.15, 17:30
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>

#define LIM_S 105 /*Диагональ*/
#define LIM_G 2999990 /*Цена*/
#define LIM_T 5 /* Телевизоры*/
using namespace std;
/*9.Определить структуру с именем TV содержащую следующие поля: страна производитель; размер диагонали; цена телевизора.*/


struct tv {

  char * name_TV;//страна производитель
  int diagonal;   //размер диагонали
  int cena;  //цена 
};
class TV{
	tv * t;
	
	public:
	int n;
	int Temp, Temp1;
		
	void Input();
	void Output();
	void Sort(int a);
	
	TV(){
	    n=LIM_T;  
		t=new struct tv[n];
	    for(size_t i=0;i<n;i++){
	    	t[i].name_TV="00";
			t[i].diagonal=0;
			t[i].cena=0;
		}
	}
	 
	TV maxdiagonal(TV &T){
	if (Temp > T.Temp) cout << "Класс 1 > Класс 2\n";
	if (Temp < T.Temp) cout << "Класс 1 < Класс 2\n";
	if (Temp == T.Temp) cout << "Класс 1 == Класс 2\n";
	}
	
	TV maxcena(TV &T){
	if (Temp1 > T.Temp1) cout << "Класс 1 > Класс 2\n";
	if (Temp1 < T.Temp1) cout << "Класс 1 < Класс 2\n";
	if (Temp1 == T.Temp1) cout << "Класс 1 == Класс 2\n";
	}
	
	 
    bool operator==(const TV &N);
};
bool TV:: operator==(const TV &N){
    return n == N.n;
}


void TV::Input(){
	for(size_t i=0;i<n;i++) t[i].name_TV=new char[n];
	cout<<"По запросам программы вводите:"<<endl;
	do{
		cout<<"\nВведите кол-во телевизоров 1<=n<=5"<<endl;
        cin >> n;
  	}while(n<=0 || n>LIM_T);  
 	for(size_t i=0;i<n;i++){
    	cout<<"\nВведите данные для телевизора №"<<i+1<<endl;
    	cout<<"Введите страну производителя: "<<endl;
    	cin>>t[i].name_TV;
		do{
    		cout<<"Введите размер диагонали 35 <= diagonal <= "<<LIM_S<<": "<<endl;
    		cin>>t[i].diagonal;
  		}while(t[i].diagonal <=34 || t[i].diagonal > LIM_S);  
  		do{
    		cout<<"Введите цену телевизора 2890р <= cena <= "<<LIM_G<<"р: "<<endl;
    		cin>>t[i].cena;
  		}while(t[i].cena<=2889 || t[i].cena>LIM_G );
  		cout<<"\n";
	}
}
	
void TV::Output(){
	for (size_t i=0;i<n;i++){
		cout << "\nДанные для телевизора №"<<i+1<<endl;
		cout << "Страна производитель:" << t[i].name_TV<<endl;
		cout << "Диагональ:" <<t[i].diagonal<<endl;
		cout << "Цена:"<< t[i].cena<<endl;
		cout<<"\n";
	}
}

void TV::Sort( int a){ 
	tv temp;
	if (a == 1) {
	for(size_t i=0;i<n-1;i++)	
	 	for(size_t j=i+1;j<n;j++)
	 		 if (t[i].diagonal > t[j].diagonal){	
	    		temp=t[j];  
	    		t[j]=t[i];
	    		t[i]=temp;	  
	  		 }	
	Temp = t[n-1].diagonal;
	}
	if (a == 2) {
	for(size_t i=0;i<n-1;i++)	
	 	for(size_t j=i+1;j<n;j++)
	 		 if (t[i].cena > t[j].cena){	
	    		temp=t[j];  
	    		t[j]=t[i];
	    		t[i]=temp;	  
	  		 }	
	Temp1 = t[n-1].cena;
	}	
}

int menu_note(){
    int menu;
    cout << "\nВыберите вариант\n" << endl;
    cout << "1. Ввод первого класса\n"
		 << "2. Ввод второго класса\n"
         << "3. Cортировка классов относительно возрастания диагонали\n"
         << "4. Сортировка классов относительно возрастания цены\n"
         << "5. Сравнивает два класса относительно диагонали\n"
         << "*Примечание: сначала отсортирует два класса по порядку возрастание диагонали\n"
		 << "6. Сравнивает два класса относительно цена\n"
		 << "*Примечание: сначала отсортирует два класса по порядку возрастание цены\n"
		 << "7. Вывод всех данных\n"
         << "8. Выход\n" << endl;
    cout << ">>> ";
    do{
    	cin.clear();
    	cin.sync();
    	cin >> menu;
    	if (menu < 1 || menu > 8) cout << "Некорректные данные"<<endl;
   	}while (cin.fail() || menu < 1 || menu > 8 );
    return menu;
}

int main(int argc, char *argv[]){
	setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	int exit;
	TV T,T1;
	cout << "Перегрузка сравнения разных элементов для классов TV" << endl;
do{
	int menu = menu_note();
	switch (menu) {
        case 1:
            cout << "1. Ввод первого класса\n"<< endl;
            T.Input(); 
            break;
        case 2:
            cout << "2. Ввод второго класса\n"<< endl;
            T1.Input();
            break;
        case 3:
            cout << "3. Cортировка классов относительно возрастания диагонали\n"<< endl;
        	T.Sort(1);
        	T1.Sort(1);
            break;
        case 4:
            cout << "4. Сортировка классов относительно возрастания цены\n"<< endl;
        	T.Sort(2);
        	T1.Sort(2);
            break;
        case 5:
            cout << "5. равнивает два класса относительно диагонали \n"<< endl;
            if ((T == T1) != 1){
				cout << "Невозможно сравнивать классы не равные по количеству данных" << endl;
				cout << "Поменяйте входящие данные для классов\n" << endl;
				break;
			}
        	T.Sort(1);
        	T1.Sort(1);
			T.maxdiagonal(T1);
            break;
        case 6:
            cout << "6. Сравнивает два класса относительно цена\n"<< endl;
            if ((T == T1) != 1){
				cout << "Невозможно сравнивать классы не равные по количеству данных" << endl;
				cout << "Поменяйте входящие данные для классов\n" << endl;
				break;
			}
        	T.Sort(2);
        	T1.Sort(2);
			T.maxcena(T1);
            break;
        case 7:
            cout << "7. Вывод всех данных\n"<< endl;
            cout << "Первый класс\n";
			T.Output();
			cout << "\n";
			cout << "Второй класс\n";
			T1.Output();
			cout << "\n";
            break;
    	case 8:
            cout << "8. Выход\n"<< endl;
            exit = 1;
            break;
    	}
	}while(exit!=1);
}
