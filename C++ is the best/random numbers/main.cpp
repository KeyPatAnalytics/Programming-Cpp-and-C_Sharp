#include <graphics.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h> /* srand , rand */
#include <time.h> /* time */
#include <math.h>

using namespace std;

double dist(int x, int y){
	return sqrt(x*x + y*y);
}

void voronoi(int width, int height, int numcell)
{
	// Maximal number of cells
	const int Lim = 501;
	if(numcell <= Lim){
		
		// coordinates of our cells
		int nx [Lim] = {};
		int ny [Lim] = {};
		
		// color of the cells
		int cR [Lim] = {};
		int cG [Lim] = {};
		int cB [Lim] = {};
		
		srand(time(NULL));
		for(int i=0;i<numcell;i++ ){
			nx[i] = rand() % width;
			ny[i] = rand() % height;
			
			// We will never have black color
			cR[i] = rand() % 255 + 1;
			cG[i] = rand() % 255 + 1;
			cB[i] = rand() % 255 + 1;
			
		}
		
		// for every pixel we search the nearest point
		for(int j=0;j<height;j++)
			for(int i=0;i<width;i++)
			{
				double dmin,d;
				int p = -1;
				
				dmin = dist(width,height);
				
				for(int k=0;k<numcell;k++)
				{
					d = dist(i-nx[k],j-ny[k]);
					if(d < dmin)
					{
						dmin = d;
						p = k;
					}
				}
				putpixel(i,j,RGB(cR[p],cG[p],cB[p]));		
			}
			
		// We surround the points with circles of radius = 2;
		for(int i=0;i<numcell;i++ )
		{
			setcolor(BLACK);
			circle(nx[i],ny[i],2);
			setfillstyle(1,BLACK);
			floodfill(nx[i],ny[i],BLACK);
		}
		
	}
	else
	{
		cout<<"The number of the cells you can draw must not be higher than "<<Lim<<endl;
	}
}


int main()
{
	int gd = DETECT, gm, width, height;
	
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	
	// we get the dimensions of the window
	width = getmaxx();
	height = getmaxy();
	
	// we draw our diagram
	voronoi(width,height,500);
	getch();
	closegraph();
	
	return 0;
}
