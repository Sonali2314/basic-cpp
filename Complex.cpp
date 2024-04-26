#include<iostream>
using namespace std;
class Complex{
	float real;
	float imaginary;
	public:
		Complex();
		Complex(float r,float i);
		void setReal(float r);
		void setImaginary(float i);
		float getReal();
		float getImaginary();
		Complex operator +(Complex c);
		Complex operator -(Complex c);
	
};
Complex Complex::operator +(Complex c)
{
	Complex c2;
	c2.real=real+c.real;
	c2.imaginary=imaginary+c.imaginary;
	return c2;
}
Complex Complex::operator -(Complex c)
{
	Complex c2;
	c2.real=real-c.real;
	c2.imaginary=imaginary-c.imaginary;
	return c2;
}
Complex::Complex()
{
	real=0;
	imaginary=0;
}
Complex::Complex(float r,float i)
{
	real=r;
	imaginary=i;
}
void Complex::setReal(float r)
{
	real=r;
}
void Complex::setImaginary(float i)
{
	imaginary=i;
}
float Complex::getReal()
{
	return real;
}
float Complex::getImaginary()
{
	return imaginary;
}
void display(Complex c)
	{
		cout<<c.getReal()<<"+"<<c.getImaginary()<<"i"<<endl;
	}
int main()
{
	Complex c1,c2,c3;
	display(c1);
}
