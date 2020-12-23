//WAP in CPP to illustrate the concept of reinterpret_cast operator using two different classes.

#include<iostream>
using namespace std;

class Complex
{
	float real,imag;
	public:
		void getdata()
		{
			cout<<"Enter a complex no.:"<<endl;
			cin>>real>>imag;
		}
		void showdata()
		{
			cout<<real<<"+i"<<imag<<endl;
		}
};
class Distance
{
	float feet,inch;
	public:
		void getdata()
		{
			cout<<"Enter a distance:"<<endl;
			cin>>feet>>inch;
		}
		void showdata()
		{
			cout<<feet<<"Feet"<<inch<<"inch"<<endl;
		}
};
int main()
{
	Complex *cptr=new Complex;
	Distance *dptr=new Distance;
	dptr->getdata();
	cptr=reinterpret_cast<Complex *> (dptr);
	cptr->showdata();
	delete dptr,cptr;
	return 0;
}
