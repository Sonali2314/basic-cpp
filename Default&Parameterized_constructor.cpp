#include<iostream>
using namespace std;
class Box{
    int length;
    int height;
    int width;
   public: Box()
    {
        length=5;
        height=5;
        width=5;
    }
    int getData(int l,int h,int w)
    {
      length=l;
      height=h;
      width=w;
    }
    void Display()
    {
        cout<<"Length : "<<length<<"\n";
        cout<<"Height : "<<height<<"\n";
        cout<<"Width  : "<<width<<"\n";
    }
    
};
 

int main()
{
    Box b1;
    int l,w,h;
    cout<<"Default Box :\n";
    b1.Display();
    cout<<"Enter the Length : ";
    cin>>l;
    cout<<"Enter the Height : ";
    cin>>h;
    cout<<"Enter the Width : ";
    cin>>w;
    cout<<"Parameterized Constructor :\n";
    b1.getData(l,h,w);
    b1.Display();
    
    
}
