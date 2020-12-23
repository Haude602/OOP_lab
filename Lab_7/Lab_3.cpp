//WAP in CPP to illustrate the concept of typeid operator

#include<iostream>
#include<typeinfo>
using namespace std;
class Base{virtual void func(){}};
class complex:public Base
{
	float real;
	float imag;
	public:
		void getdata()
		{
			cin>>real>>imag;
		}
		void showdata()
		{
			cout<<real<<"+i"<<imag;
		}
};
int main()
{
	int a,*iptr;
	float b,*fptr;
	complex c,*cptr;
	cout<<"The type of a is:"<<typeid(a).name()<<endl;
	cout<<"The type of iptr is:"<<typeid(iptr).name()<<endl;
	cout<<"The type of b is:"<<typeid(b).name()<<endl;
	cout<<"The type of fptr is:"<<typeid(fptr).name()<<endl;
	cout<<"The type of c is:"<<typeid(c).name()<<endl;
	cout<<"The type of cptr is:"<<typeid(cptr).name()<<endl;
	return 0;
}
