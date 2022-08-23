#include <graphics.h>

int main()
{
	initwindow(1000,1000);
	setbkcolor(3);
    cleardevice();
    circle(450,250,250);
    circle(450,250,240);
    circle(450,250,230);
    settextstyle(4,HORIZ_DIR,4);
    outtextxy(250,230,"Victory at least!");
	getch();
	closegraph();
	
	return 0;
}
