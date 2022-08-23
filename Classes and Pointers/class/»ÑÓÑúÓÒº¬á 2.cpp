//Karpov Aleksey, NK-101,09.04.15, 17:30
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>

#define LIM_S 105 /*���������*/
#define LIM_G 2999990 /*����*/
#define LIM_T 5 /* ����������*/
using namespace std;
/*9.���������� ��������� � ������ TV ���������� ��������� ����: ������ �������������; ������ ���������; ���� ����������.*/


struct tv {

  char * name_TV;//������ �������������
  int diagonal;   //������ ���������
  int cena;  //���� 
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
	if (Temp > T.Temp) cout << "����� 1 > ����� 2\n";
	if (Temp < T.Temp) cout << "����� 1 < ����� 2\n";
	if (Temp == T.Temp) cout << "����� 1 == ����� 2\n";
	}
	
	TV maxcena(TV &T){
	if (Temp1 > T.Temp1) cout << "����� 1 > ����� 2\n";
	if (Temp1 < T.Temp1) cout << "����� 1 < ����� 2\n";
	if (Temp1 == T.Temp1) cout << "����� 1 == ����� 2\n";
	}
	
	 
    bool operator==(const TV &N);
};
bool TV:: operator==(const TV &N){
    return n == N.n;
}


void TV::Input(){
	for(size_t i=0;i<n;i++) t[i].name_TV=new char[n];
	cout<<"�� �������� ��������� �������:"<<endl;
	do{
		cout<<"\n������� ���-�� ����������� 1<=n<=5"<<endl;
        cin >> n;
  	}while(n<=0 || n>LIM_T);  
 	for(size_t i=0;i<n;i++){
    	cout<<"\n������� ������ ��� ���������� �"<<i+1<<endl;
    	cout<<"������� ������ �������������: "<<endl;
    	cin>>t[i].name_TV;
		do{
    		cout<<"������� ������ ��������� 35 <= diagonal <= "<<LIM_S<<": "<<endl;
    		cin>>t[i].diagonal;
  		}while(t[i].diagonal <=34 || t[i].diagonal > LIM_S);  
  		do{
    		cout<<"������� ���� ���������� 2890� <= cena <= "<<LIM_G<<"�: "<<endl;
    		cin>>t[i].cena;
  		}while(t[i].cena<=2889 || t[i].cena>LIM_G );
  		cout<<"\n";
	}
}
	
void TV::Output(){
	for (size_t i=0;i<n;i++){
		cout << "\n������ ��� ���������� �"<<i+1<<endl;
		cout << "������ �������������:" << t[i].name_TV<<endl;
		cout << "���������:" <<t[i].diagonal<<endl;
		cout << "����:"<< t[i].cena<<endl;
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
    cout << "\n�������� �������\n" << endl;
    cout << "1. ���� ������� ������\n"
		 << "2. ���� ������� ������\n"
         << "3. C��������� ������� ������������ ����������� ���������\n"
         << "4. ���������� ������� ������������ ����������� ����\n"
         << "5. ���������� ��� ������ ������������ ���������\n"
         << "*����������: ������� ����������� ��� ������ �� ������� ����������� ���������\n"
		 << "6. ���������� ��� ������ ������������ ����\n"
		 << "*����������: ������� ����������� ��� ������ �� ������� ����������� ����\n"
		 << "7. ����� ���� ������\n"
         << "8. �����\n" << endl;
    cout << ">>> ";
    do{
    	cin.clear();
    	cin.sync();
    	cin >> menu;
    	if (menu < 1 || menu > 8) cout << "������������ ������"<<endl;
   	}while (cin.fail() || menu < 1 || menu > 8 );
    return menu;
}

int main(int argc, char *argv[]){
	setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	int exit;
	TV T,T1;
	cout << "���������� ��������� ������ ��������� ��� ������� TV" << endl;
do{
	int menu = menu_note();
	switch (menu) {
        case 1:
            cout << "1. ���� ������� ������\n"<< endl;
            T.Input(); 
            break;
        case 2:
            cout << "2. ���� ������� ������\n"<< endl;
            T1.Input();
            break;
        case 3:
            cout << "3. C��������� ������� ������������ ����������� ���������\n"<< endl;
        	T.Sort(1);
        	T1.Sort(1);
            break;
        case 4:
            cout << "4. ���������� ������� ������������ ����������� ����\n"<< endl;
        	T.Sort(2);
        	T1.Sort(2);
            break;
        case 5:
            cout << "5. ��������� ��� ������ ������������ ��������� \n"<< endl;
            if ((T == T1) != 1){
				cout << "���������� ���������� ������ �� ������ �� ���������� ������" << endl;
				cout << "��������� �������� ������ ��� �������\n" << endl;
				break;
			}
        	T.Sort(1);
        	T1.Sort(1);
			T.maxdiagonal(T1);
            break;
        case 6:
            cout << "6. ���������� ��� ������ ������������ ����\n"<< endl;
            if ((T == T1) != 1){
				cout << "���������� ���������� ������ �� ������ �� ���������� ������" << endl;
				cout << "��������� �������� ������ ��� �������\n" << endl;
				break;
			}
        	T.Sort(2);
        	T1.Sort(2);
			T.maxcena(T1);
            break;
        case 7:
            cout << "7. ����� ���� ������\n"<< endl;
            cout << "������ �����\n";
			T.Output();
			cout << "\n";
			cout << "������ �����\n";
			T1.Output();
			cout << "\n";
            break;
    	case 8:
            cout << "8. �����\n"<< endl;
            exit = 1;
            break;
    	}
	}while(exit!=1);
}
