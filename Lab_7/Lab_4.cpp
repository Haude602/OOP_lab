//Write a program in CPP to illustrate the concept of (pointer to derived class object using) virtual function

#include<iostream>
using namespace std;

class Base //base class
{
	public:
		virtual void show() //virtual function
		{
			cout<<"Inside Base class"<<endl;
		}
};
class Derv1: public Base //First derived class
{
	public:
		void show()
		{
			cout<<"Inside Derv1 class"<<endl;
		}
};
class Derv2: public Base //Second derived class
{
	public:
		void show()
		{
			cout<<"Inside Derv2 class"<<endl;
		}
};
int main()
{
	Base* ptr;
	Derv1 dv1;
	Derv2 dv2;
	ptr=&dv1;
	ptr->show();
	ptr=&dv2;
	ptr->show();
	return 0;
}
