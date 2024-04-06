#include<iostream>
#include<string>
/*Person is base class
student is derived class
in person gender is protected 
in student marks is private
student has visibility mode of public for person class
thus in this we access protcted member in derived class*/
using namespace std;
class Person
{
	public: 
		string name;
		int age;
	protected:
		string gender;
};
class Student:public Person
{
	private :
		int marks;
	public:
		int roll_no;
		void setGender(string a)
		{
			gender=a;
		}
		void setMarks(int m)
		{
			marks=m;
		}
		void display()
		{
			cout<<"NAME    : "<<name<<endl;
			cout<<"AGE     : "<<age<<"\n";
			cout<<"ROLL NO : "<<roll_no<<"\n";
			cout<<"GENDER  : "<<gender<<"\n";
			cout<<"MARKS   : "<<marks<<endl;
		}
};
int main()
{
	Student s;
	s.name="Sonali";
	s.age=20;
	s.roll_no=118;
	int marks=102;
	string gender="Female";
	s.setGender(gender);
	s.setMarks(marks);
	s.display();
}
