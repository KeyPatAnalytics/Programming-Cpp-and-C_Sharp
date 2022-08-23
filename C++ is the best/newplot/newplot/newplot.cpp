#include <conio.h>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "graphics.h"

// Driver code
int main()
{
	// Initialize graphics function
	int gd = DETECT, gm;
	//char driver[] =  "";
	initgraph(&gd, &gm, NULL);

	/*// maximum X-coordinate for the window
	int maxx = getmaxx();

	// maximum Y-coordinate for the window
	int maxy = getmaxy();

	// Start drawing from the mid of the screen
	ellipseovercircle(maxx / 2, maxy / 2,100, 40, 28);*/
	// line for x1, y1, x2, y2
	line(150, 150, 450, 150);

	// line for x1, y1, x2, y2
	line(150, 200, 450, 200);

	// line for x1, y1, x2, y2
	line(150, 250, 450, 250);

	getch();
	closegraph();
	return 0;
}
