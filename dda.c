#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

int main(){
	int gd = DETECT,gm;
	int x1,y1,x2,y2,dx,dy,step,i;
	float xinc,yinc,x,y;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	clrscr();
	printf("enter x1 and y1: ");
	scanf("%d%d",&x1,&y1);
	printf("enter x2 and x2: ");
	scanf("%d%d",&x2,&y2);
	clrscr();
	dx = x2-x1;
	dy = y2-y1;
	if(abs(dx) > abs(dy)){
		step = abs(dx);
	}
	else{
		step =abs(dy);
	}
	xinc = dx/step;
	yinc = dy/step;
	x = x1;
	y = y1;
	for(i = 0 ; i <= step;i++){
		putpixel(x,y,15);
		x = x + xinc;
		y = y + yinc;
	}
	getch();
	closegraph();
	return 0;
}
