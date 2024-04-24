#include<iostream>
#include<math.h>
#define pi 3.14
using namespace std;
class Circle{
	int centerX;
	int centerY;
	int radius,circumference,area;
	public: 
		Circle()
		{
			centerX=0;
			centerY=0;
			radius=5;
			calcCirumference();
			calcArea();
		}
		Circle(int cx,int cy)
		{
			centerX=cx;
			centerY=cy;
			radius=5;
			calcCirumference();
			calcArea();
		}
		Circle(int cx,int cy,int r)
		{
			centerX=cx;
			centerY=cy;
			radius=r;
			calcCirumference();
			calcArea();
		}
		int calcCirumference()
		{
			circumference=2*pi*radius;
			return circumference;
		}
		int calcArea()
		{
			area=pi*radius*radius;
			return area;
		}
		void getArea(int a)
		{
			area=a;
		}
		void getCirumference(int c)
		{
			circumference=c;
		}
};
class Line{
	int x1,y1,x2,y2,slop,interceptX,interceptY;
	public:
		void getPt1(int x,int y)
		{
			x1=x;
			y1=y;
		}
		void getPt2(int x,int y)
		{
			x2=x;
			y2=y;
		}
		int slop(int X1,int Y1,int X2,int Y2)
		{
			slop=(Y2-Y1)/(X2-X1);
		}
		
};
int main()
{
	
}
