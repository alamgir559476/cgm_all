#include<graphics.h>
#include<stdio.h>
#include<math.h>
#include<dos.h>
#include<conio.h>

int main()
{
	initwindow(400,300,"Draw a Line");
	int x, y, x1, y1, x2, y2, dx, dy, xend;
	float m, b;
	//input the point
	printf("Enter the value of x1 & y1: ");
	scanf("%d %d", &x1,&y1);
	
	printf("Enter the value of x2 & y2: ");
	scanf("%d %d", &x2,&y2);
	
	
	//calculate dx & dy
	dx = (x2-x1);
	dy = (y2-y1);
	
	m = dy/dx;
	b = y1-(m*x1);
	if(dx<0)
	{
		x = x2;
		y = y2;
		xend = x1;
	}
	else
	{
		x = x1;
		y = y1;
		xend = x2;
	}
	int i = 1;
	for(i=x; x<=xend; i++)
	{
		putpixel(x, y, 5);
		x = x+1;
		y = m*x + b;
	}
	
	
	while(!kbhit())
	{
		delay(200);
	}
	
	
	getch();	
	return 0;
}
