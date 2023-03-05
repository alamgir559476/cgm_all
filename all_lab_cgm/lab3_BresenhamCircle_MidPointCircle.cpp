#include <bits/stdc++.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include<math.h>
#include<string.h>
using namespace std;

void BresenhamCircle(float x1,float y1,float r)
{
	int X,Y;
	float x_new,y_new;
	X = getmaxx();
	Y = getmaxy();
	rectangle(0,0,X,Y);
	line(X/2,0,X/2,Y);
	line(0,Y/2,X,Y/2);
	x_new = X/2;
	y_new = Y/2;

	float x,y,d;
	x1 = x_new-x1;
	y1 = y_new+y1;
	x = 0;
	y = r;
	d = 3-(2*r);
	while(x<=y)
	{
		putpixel(x1+x,y1+y,15);
		putpixel(x1-x,y1+y,15);
		putpixel(x1+x,y1-y,15);
		putpixel(x1-x,y1-y,15);
		putpixel(x1+y,y1+x,GREEN);
		putpixel(x1+y,y1-x,GREEN);
		putpixel(x1-y,y1+x,GREEN);
		putpixel(x1-y,y1-x,GREEN);
		x=x+1;
		if(d<0)
		{
			d = d+4*(x)+6;
		}
		else
		{
			d = d+4*(x-y)+10;
			y=y-1;

		}
		delay(20);

	}
}

void MidPoint(float x1,float y1,float r)
{
	int X,Y;
	float x_new,y_new;
	X = getmaxx();
	Y = getmaxy();
	rectangle(0,0,X,Y);
	line(X/2,0,X/2,Y);
	line(0,Y/2,X,Y/2);
	x_new = X/2;
	y_new = Y/2;
	
	//outtextxy(x_new,y_new,"(0,0)");

	float x,y,d;
	x1 = x_new-x1;
	y1 = y_new+y1;
	x = 0;
	y = r;
	d = 1-r;
	while(x<=y)
	{
		putpixel(x1+x,y1+y,15);
		putpixel(x1-x,y1+y,15);
		putpixel(x1+x,y1-y,15);
		putpixel(x1-x,y1-y,15);
		putpixel(x1+y,y1+x,GREEN);
		putpixel(x1+y,y1-x,GREEN);
		putpixel(x1-y,y1+x,GREEN);
		putpixel(x1-y,y1-x,GREEN);
		x=x+1;
		if(d<0)
		{
			d = d+2*(x)+3;
		}
		else
		{
			d = d+2*(x-y)+5;
			y=y-1;

		}
		delay(20);

	}
}

int main()
{
	float x1,y1,r;
	initwindow(800,600);
	
	int ch;
	cout << "1. Bresenham's Algorithm\n";
	cout << "2. MidPoint Algorithm\n";
	cout << "0. Exit\n";
	cout << "Enter the option: ";
	cin >> ch;
	switch(ch)
	{
		case 1:
			cout << "Enter the center:";
			cin >> x1 >> y1;
			cout << "Enter the radius:";
			cin >> r;
			BresenhamCircle(x1,y1,r);
			break;
		case 2:
			cout << "Enter the center:";
			cin >> x1 >> y1;
			cout << "Enter the radius:";
			cin >> r;
			MidPoint(x1,y1,r);
			break;
		default:
			exit(1);	
	}
	
	
	getch();

	return 0;
}
