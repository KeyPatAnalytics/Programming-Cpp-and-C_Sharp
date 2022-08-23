#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#define LIM_S 200
#define LIM_G 20
using namespace std;
/*Программа формирования структуры Tutor*/
class Tutor{
  private: //можно не указывать - по умолчанию
    char * name_f;//название
	int n_stud;   //число студентов
    int n_group;  //число групп
    int n_bstud;  //число отстающих студ.
  public:
    void input();
    void output();
};
int main(int argc, char *argv[])
{

   Tutor T;
   T.input();
   T.output();
   system("PAUSE");
   return EXIT_SUCCESS;
}

void Tutor::input(){
  name_f=new char[LIM_S];
  printf("Программа формирования структуры Tutor\n");
  printf("По запросам программы вводите\n");
  printf("Введите название направления\n");
  scanf("%s",name_f);

  do{
    printf("Введите общее количество студентов 0<n<=%d ",LIM_S);
    scanf("%d",&n_stud);
  }while(n_stud<=0 || n_stud>LIM_S);
  do{
    printf("Введите количество групп 0<g<=%d ",LIM_G);
    scanf("%d",&n_group);
  }while(n_group<=0 || n_group>LIM_G);
  do{
    printf("Введите количество отстающих студентов 0<=bs<=%d ",LIM_S);
    scanf("%d",&n_bstud);
  }while(n_bstud<0 || n_bstud>LIM_S);
}
void Tutor::output(){
  printf("Направление: %s\n",name_f);
  printf("Число студентов: %d\n",n_stud);
  printf("Число групп: %d\n",n_group);
  printf("Число отстающих: %d\n",n_bstud);
  getch();
}
