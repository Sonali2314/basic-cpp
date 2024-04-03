#include<iostream>
#include<string>
#include<list>
using namespace std;

class YTChannel
{
	public:string name;
	
	public:YTChannel()
	{
		name="YouTube";
	}
	
	public:YTChannel(string n)
	{
		name=n;
	}
	
};

class MyCollection
{
	public:list<YTChannel>MyPlaylist;
	public:void operator +=(YTChannel &yt)
	{
		MyPlaylist.push_back(yt);
	}
};
ostream& operator <<(ostream& COUT,YTChannel &yt)
{
	COUT<<yt.name<<endl;
	return COUT;
}
ostream& operator <<(ostream& COUT,MyCollection &mc)
{
	for(YTChannel& yt:mc.MyPlaylist)
	{
		COUT<<yt.name<<endl;
	}
	return COUT;
}
int main()
{
	YTChannel yt1;
	YTChannel yt2("TED_ED");
	MyCollection mc;
	mc +=yt1;
	mc +=yt2;
	cout << mc;
	return 0;
	
}
