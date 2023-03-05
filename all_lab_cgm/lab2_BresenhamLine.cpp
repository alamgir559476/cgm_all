#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void Bresenhamline(int x1,int y1,int x2,int y2)
{
	int dx,dy,inc1,inc2,inc3,inc4,d;
	float m;
	initwindow(300,300,"Draw a Line");
	
	int X,Y;
	float x_new,y_new;
	X = getmaxx();
	Y = getmaxy();
	rectangle(0,0,X,Y);
	line(X/2,0,X/2,Y);
	line(0,Y/2,X,Y/2);
	x_new = X/2;
	y_new = Y/2;
	
	dx=x2-x1;
	dy= y2-y1;
	m = dy/dx;
	if(m<=1)
	{
		cout << "For m<=1" << endl;
		d = 2*dy-dx;
		inc1 = 2*dy;
		inc2 = 2*(dy-dx);
		while(x1<=x2)	
		{
			putpixel(x_new+x1,y_new-y1,15);
//			cout << x1 << y1 << endl;
			if(d<=0)
			{
				d = d+inc1;
			}
			else{
				d =d+inc2;
				y1++;
			}
			x1++;
		}
	}
	else
	{
		cout << "For m>1" << endl;
		d = 2*dx-dy;
		inc3 = 2*dx;
		inc4 = 2*(dx-dy);
		while(y1<=y2)
		{
			putpixel(x_new+x1,y_new-y1,15);
			if(d<=0)
			{
				d = d+inc3;
			}
			else{
				d =d+inc4;
				x1++;
			}
			y1++;
		}
	}
}

int main()
{
	int x1, y1, x2, y2;
	cout << "Enter the value of x1 and y1: ";
	cin >> x1 >> y1;
	cout << "Enter the value of x2 and y2: ";
	cin >> x2 >> y2;
	if(x2<x1)
	{
		int temp;
		temp = x1;
		x1 = x2;
		x2 = temp;
	}
	if(y2<y1)
	{
		int temp;
		temp = y1;
		y1 = y2;
		y2 = temp;
	}
	Bresenhamline(x1,y1,x2,y2);
	getch();
	return 0;
}
