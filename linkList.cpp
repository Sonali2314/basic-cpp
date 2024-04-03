#include<iostream>
using namespace std;
class Node{
	public:int data;
	Node* ptr;
};
class Linkedlist{
	private: Node* head;
	public : 
		Linkedlist()
		{
			head=NULL;
		}
	void insert(int d)
		{
			Node* newNode=new Node;
			newNode->data=d;
			newNode->ptr=head;
			head=newNode;
		}
	void deletion(int d)
		{
			Node* current = head;
			while(current!=NULL)
			{
					if(current->data=d)
					{
						current->data=0;
						continue;
					}
			}
		}
	void display()
		{
			Node* current = head;
			while(current!=NULL)
			{
				cout<<current->data<<'\t';
				current=current->ptr;	
			}
		}
};
int main()
{
	Linkedlist l;
	char choice;
	cout<<"do you want to continue y/n"<<endl;
	cin>>choice;
	do{
		int c;
		cout<<"for insertion choose 1\n  for deletion2\n for display 3; "<<endl;
		cin>>c;
		
		switch (c)
		{
			case 1:
				int data;
				cout<<"enter data for insertion : ";
				cin>>data;
				l.insert(data);
				break;
			case 2:
				cout<<"enter data for deletion : "<<endl;
				cin>>data;
				l.deletion(data);
				break;
			case 3:
				cout<<"elements in the list :"<<endl;
				l.display();
				break;
			default:
				cout<<"invalid choice "<<endl;
				break;
		}
		cout<<"do you want to continue y/n"<<endl;
		cin>>choice;
	} while(choice=='y');
		
	return 0;
}
