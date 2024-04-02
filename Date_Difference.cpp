#include<iostream>
#include<string>
#include<math.h>
using namespace std;
class Date{
	int day;
	int month;
	int year;
	
	public: Date()
	{
		day=01;
		month=01;
		year=2000;
	}
	
	public: string Month(int m)
	{
	string arr[]={"Invalid","JAN","FEB","MAR","APR","MAY","JUNE","JULY","AUG","SEP","OCT","NOV","DEC"};
	return arr[m];
	}
	
	public: Date(int d,int m,int y)
	{
		day=d;
		month=m;
		year=y;
	}
	
	public: int showDate()
	{
		cout<<endl;
		cout<<day<<"-"<<month<<"-"<<year<<endl;
		cout<<day<<"-"<<Month(month)<<"-"<<year<<endl;
		cout<<endl;a
	}
	
	static int diffDate(Date d1,Date d2)
	{
		int y=0,m=0,d=0,diff=0;
		int dim[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
		if(d1.year==d2.year)
		{
			if(d1.month==d2.month)
			{
				d=abs(d1.day-d2.day);
				cout<<"Difference is "<<d<<" days "<<m<<" month "<<y<<" year ";
			}
			else
			{
				m=abs(d1.month-d2.month);
				d=abs(d1.day-d2.day);
				cout<<"Difference is "<<d<<" days "<<m<<" month "<<y<<" year ";
			}
		}
		else
		{
			y=abs(d1.year-d2.year);
			m=abs(d1.month-d2.month);
			d=abs(d1.day-d2.day);
			cout<<"Difference is "<<d<<" days "<<m<<" month "<<y<<" year ";
		}
	}
};
int main()
{
	int d,m,y,D,Y,M;
	cout<<"Enter Date : ";
	cin>>d;
	cout<<"Enter Month : ";
	cin>>m;
	cout<<"Enter Year : ";
	cin>>y;
	Date d1(d,m,y);
	d1.showDate();
	cout<<"Enter Date 2 : ";
	cin>>D;
	cout<<"Enter Month 2 : ";
	cin>>M;
	cout<<"Enter Year 2 : ";
	cin>>Y;
	Date d2(D,M,Y);
	d2.showDate();
	Date::diffDate(d1,d2);
	
	
}
