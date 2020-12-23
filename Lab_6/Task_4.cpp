//WAP in CPP to illustrate the concept of constructor and destructor invocation in single inheritance

#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
				cout << "Inside Base constructor" << endl;
		}
		~A()
		{
			cout << "Inside Base destructor" << endl;
		}
};
class B: public A
{
	public:
		B()
		{
			cout << "Inside Derived constructor" << endl;
		}
		~B( )
		{
			cout << "Inside Derived destructor" << endl;
		}
};
int main( )
{
	B obj;
	return 0;
}

