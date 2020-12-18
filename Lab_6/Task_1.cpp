//WAP in CPP to illustrate the concept of single inheritance using following diagram.  |student|<-|leader|
#include<iostream>
using namespace std;
class student
{
	protected:
	char name[20];
	int roll;
	public:
	void getdata()
{
	cout<<"Enter the name and roll number"<<endl;
	cin>>name>>roll;
}
};
class leader:public student
{
	protected:
	int id;
	char un[25];
	public:
	void getleader()
	{
		cout<<"Enter union name and union id of leader"<<"\n";
		cin>>un>>id;
	}
	void showleader()
	{
		cout<<"The information of leader is "<<endl;
		cout<<"Name:"<<name<<endl<<"Roll:"<<roll<<endl<<"Union:"<<
		un<<endl<<"Union ID:"<<id<<"\n";
	}
};
int main()
{
	leader l;
	l.getdata();
	l.getleader();
	l.showleader();
	return 0;
}
