#include<iostream>
#define MaxSize 100
using namespace std;
class Queue
{
	int queue[MaxSize];
	int front,rear;
	public:
		Queue()
		{
			rear=0;
			front=0;
		}
		void enqueue(int a)
		{
			queue[rear]=a;
			++rear;
		}
		void dequeue()
		{
			++front;
		}
		void display()
		{
			for(int i=front;i<rear;i++)
			{
				cout<<queue[i]<<"\t";
			}
			cout<<endl;
		}
	
};
int main()
{
	cout<<"\tQUEUE"<<endl;
	Queue s;
	int ch;
	int t=1;
	while(t)
	{
	cout<<"\nEnter the choice\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n";
	cin>>ch;
	switch(ch)
		{
			case 1:
				{
					int a;
					cout<<"Enter Elemenet to be enqueue : ";
					cin>>a;
					s.enqueue(a);
					break;
				}
			case 2:
				{
					s.dequeue();
					break;
				}
			case 3:
				{
					s.display();
					break;
				}
			default:
				{
					cout<<"INVALID CHOICE ";
					break;
				}
				
		}
	cout<<"if want to continue choose any integer\nif not choose 0 \nyour choice :";
	cin>>t;
}
	
}
