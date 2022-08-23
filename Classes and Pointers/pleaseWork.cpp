#include<iostream>
#include<graphics.h>
#include<conio.h>

using namespace std;

int main()
{
    cout<<"Hello graph!";
    int gd=DETECT,gm, left=100,top=100,right=200,bottom=200,x=300,y=150,radius=50;
    initgraph(&gd,&gm,"C:\\TC\\BGI");

    rectangle(left,top,right,bottom);
    circle(x,y,radius);
    bar(left+300,top,right+300,bottom);
    ellipse(x,y+200,0,360,100,50);
    outtextxy(left+100,right+325, "My first C graphics program");

    getch();
    closegraph();
    return 0;
}
