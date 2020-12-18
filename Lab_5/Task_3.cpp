//WAP in CPP to sort list of n integers in alphabetical order using concept STL

#include<iostream>
#include<list>
#include<cstring>
using namespace std;
class sort
{
	list <string> l;
	public:
	void getdata()
	{
		cout<<"\nEnter string\n";
		string* ptr=new string;
		cin>>*ptr;
		l.push_back(*ptr);
		delete ptr;
	}
	void act()
	{
		l.sort();
	}
	void showdata()
	{
		while(!l.empty())
		{
		cout<<l.front()<<endl;
		l.pop_front();
		}
	}
};
int main()
{
	sort s;
	int n;
	cout<<"\nEnter how many string you wanna enter"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		s.getdata();
	}
	s.act();
	s.showdata();
	return 0;


}
