//Write a program in CPP to find the sum of two complex numbers using the concept of the overloading binary + operator using non-member/friend function. 

#include <iostream>
using namespace std;
class complex
{
	float real;
	float imag;
	public:
		void getdata()
		{
			cout<<"Enter Real part"<<endl;
			cin>>real;
			cout<<"Enter imaginary part"<<endl;
			cin>>imag;
		}
		void showdata()
		{
			
			cout<<real<<"+i"<<imag<<endl;
			
		}
		friend complex operator +(complex,complex);
		
};
		complex operator +(complex c1,complex c2)
		{
			complex temp;
			temp.real=c1.real+c2.real;
			temp.imag=c1.imag+c2.imag;
			return temp;
		}
		

int main()
{
	complex c1,c2,sum;
	
	c1.getdata();
	c1.showdata();
	c2.getdata();
	c2.showdata();
	sum=c1+c2;
	cout<<"____________________"<<endl;
	cout<<"Sum is"<<endl;
	sum.showdata();
	
	return 0;
}
 
