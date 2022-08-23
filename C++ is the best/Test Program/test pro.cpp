#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <graphics.h>

using namespace std;

int main(int argc, char *argv[])
{
    initgraph(400,400," ");
    setbkcolor(3);
    cleardevice();
    circle(450,250,250);
    circle(450,250,240);
    circle(450,250,230);
    settextstyle(4,HORIZ_DIR,6);
    outtextxy(250,230,"Victory at least!");
    getch();
    
    return 0;
}
