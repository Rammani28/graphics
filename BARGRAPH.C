#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main(){
	int gd = DETECT,gm,x=130,y = 100,x1 = 160,y1=400;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	line(100,50,100,400);
	line(100,400,700,400);
	bar3d(x,y,x1,y1,10,1);
	bar3d(x+100,y+50,x1+100,y1,10,1);
	bar3d(x+200,y+100,x1+200,y1,10,1);
	getch();
	closegraph();
}