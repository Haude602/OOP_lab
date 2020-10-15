//Write a program in CPP to overload unary ++ for postfix and prefix increment operation on complex numbers using member function
#include <iostream>
using namespace std;
class complex
{
	float real;
	float imag;
	public:
		
		void getdata()  
		{
			cout<<"Enter real and imaginary part"<<endl;
            cin>>real>>imag;
		}
        void showdata()
        {
            cout<<"The complex number is "<<endl;
            cout<<real<<"+i"<<imag;
        }
		complex operator ++() 
        {
            complex temp;
            temp.real=++real;
            temp.imag=++imag;
            return temp;
        }
		complex operator ++(int) 
        {
            complex temp;
            temp.real=real++;
            temp.imag=imag++;
            return temp;
        }
		
};

int main()
{
	complex c1,c2,c3;
	c1.getdata();
	c2.getdata();
    c2=++c1;
    c3=c2++;
    c1.showdata();
    c2.showdata();
    c3.showdata();
	
	return 0;
}
 

