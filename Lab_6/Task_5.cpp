//WAP in CPP to illustrate the concept of constructor and destructor invocation in multiple inheritance.
#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout << "Inside Class A constructor" << endl;
		}
		~A()
		{
			cout << "Inside Class A destructor" << endl;
		}
};
class B
{
	public:
		B()
		{
			cout << "Inside Class B constructor" << endl;
		}
		~B()
		{
			cout << "Inside Class B destructor" << endl;
		}
};
class C: public A, public B
{
	public:
		C()
		{
			cout << "Inside class C constructor" << endl;
		}
		~C( )
		{
			cout << "Inside class C destructor" << endl;
		}
};
int main( )
{
	C obj;
	return 0;
}
