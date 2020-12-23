//WAP in CPP to illustrate the concept of multipath inheritance and virtual base class using following figure.
//  				--->|iNTERNAL|   ---
//   |STUDENT|-----              		----->  |RESULT|
//  				--->|EXTERNAL|   ---

#include<iostream>
using namespace std;
class student
{
	protected:
	int roll;
	char name[25];
	public:
	void getstudent()
	{
		cout<<"Enter name and roll:"<<endl;
		cin>>name>>roll;
	}
};
class internal:virtual public student
{
	protected:
	float marks1,marks2,marks3;
	public:
	void getinternal()
	{
		cout<<"Enter internal marks in three subjects"<<endl;
		cin>>marks1>>marks2>>marks3;
	}
	void showinternal()
	{
		cout<<"marks1:"<<marks1<<endl<<"marks2:"<<marks2<<endl
		<<"marks3:"<<marks3<<endl;
	}
};
class external:virtual public student
{
	protected:
	float marks4,marks5,marks6;
	public:
	void getexternal()
	{
		cout<<"Enter external marks in three subjects"<<endl;
		cin>>marks4>>marks5>>marks6;
	}
	void showexternal()
	{
		cout<<"marks4:"<<marks4<<endl<<"marks5:"<<marks5<<endl
		<<"marks6:"<<marks6<<endl;
	}
};
class result:public internal,public external
{
	protected:
	float total,percentage;
	public:
	void pertotal()
	{
		total=marks1+marks2+marks3+marks4+marks5+marks6;
		percentage=total/600*100;
	}
	void showresult()
	{
		cout<<"The result is:"<<endl;
		cout<<"Name:"<<name<<endl<<"Roll:"<<roll<<endl;
		showinternal();
		showexternal();
		cout<<"Total"<<total<<endl<<"Percentage:"<<percentage<<endl;
	}
};
int main()
{
	result r;
	r.getstudent();
	r.getinternal();
	r.getexternal();
	r.pertotal();
	r.showresult();
	return 0;
}
