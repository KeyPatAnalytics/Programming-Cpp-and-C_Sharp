#include <graphics.h>
 int main()
 {
     int gd = DETECT, gm;
     initgraph(&gd,&gm,"C:\\TC\\BG");
     circle(200,200,100);
     getch();
     closegraph();
return 1;
 }

