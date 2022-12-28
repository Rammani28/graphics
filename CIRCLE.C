#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd = DETECT,gm,r,xc,yc,x0,y0,p0;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	printf("enter the value of xc,yc,r");
	scanf("%d %d %d",&xc,&yc,&r);
	x0 = 0 ;
	y0 = r;
	p0 = 1 - r;
	while(x0 <= y0){
		if(p0 < 0){
			p0 = p0 + 2*x0 +1;
			x0 = x0+1;
			y0 = y0;

		}
		else{
			p0 = p0 + 2*x0 - 2*y0 +1;
			x0 = x0+1;
			y0 = y0-1;

		}
	putpixel(xc+x0,yc-y0,5);
	putpixel(xc+y0,yc-x0,5);
	putpixel(xc+y0,yc+x0,5);
	putpixel(xc+x0,yc+y0,5);
	putpixel(xc-x0,yc+y0,5);
	putpixel(xc-y0,yc+x0,5);
	putpixel(xc-y0,yc-x0,5);
	putpixel(xc-x0,yc-y0,5);
	}
	getch();
	closegraph();
}


