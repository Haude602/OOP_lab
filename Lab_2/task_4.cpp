//Write a program in CPP to illustrate the concept of 
//constructor(default, parameterized and copy constructor) and destructor taking class complex as an example
#include <iostream>
using namespace std;
class complex
{
	float real;
	float imag;
	public:
		
		complex()  //Default constructor
		{
			real=0.0;
			imag=0.0;
		}
		complex(float r,float i)   //Parameterized cnstructor
		{
			real=i;
			imag=i;
		}
		
		~complex()  //Destructor
		{ 
		} 
		void showdata()
		{
			
			cout<<real<<"+i"<<imag<<endl;
			
		}
		complex add(complex c1,complex c2)
		{
			complex temp;
			temp.real=c1.real+c2.real;
			temp.imag=c1.imag+c2.imag;
			return temp;
		}
		
};

int main()
{
	complex c1(2,4),c2(2.2,4.4),sum;
	c1.showdata();
	c2.showdata();
	sum=sum.add(c1,c2);
	cout<<"____________________"<<endl;
	cout<<"Sum is"<<endl;
	sum.showdata();
	
	return 0;
}
 
