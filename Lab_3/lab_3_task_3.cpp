//Write a program in CPP to find the sum of two complex numbers using the concept of the overloading binary + operator using member function.  
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
		complex operator +(complex c)
		{
			complex temp;
			temp.real=real+c.real;
			temp.imag=imag+c.imag;
			return temp;
		}
		
};

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
 
