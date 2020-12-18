// Write a program to add two integers and two float numbers entered by the user using the
//concept of function template.

#include<iostream>
using namespace std;
template<class T>
T addition(T x, T y)
{
T sum;
sum = x + y;
return sum;
}
class add
{
	protected:
		int a,b,sumint;
		float p,q,sumfloat;
	public:
		void getdata()
		{
			cout<<"\nEnter two integers\n";
			cin>>a>>b;
			cout<<"\nEnter two float numbers";
			cin>>p>>q;
		}
		void calculate()
		{
			sumint=addition(a,b);
			sumfloat=addition(p,q);
			
		}
		void showdata()
		{
			cout<<"\n Sum of integers is "<<sumint;
			cout<<"\n Sum of float is "<<sumfloat;
		}
};
int main()
{
add* ptr= new add;
ptr->getdata();
ptr->calculate();
ptr->showdata();
delete ptr;
return 0;
}
