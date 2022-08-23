#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main()
{
	//int gd = DETECT, gm, color;
	initwindow(400,400);
	
	putpixel(85,35,GREEN);
	putpixel(30,40,RED);
	putpixel(115,50,YELLOW);
	putpixel(135,50,CYAN);
	putpixel(45,60,BLUE);
	putpixel(20,100,GREEN);
	
	getch();
	closegraph();
	
	return 0;
}
