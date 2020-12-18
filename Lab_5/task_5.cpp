//WAP in CPP to illustrate the rethrowing an exception

#include<iostream>
using namespace std;
void rethrowDemo(int x, int y)
{
	try
	{
		if(y!=0)
		{
			cout<<"The result of division is:"<<(x/y)<<endl;
		}
		else
		{
			throw y;
		}
	
	}
	catch(int z)
	{
		cout<<"I cannot handle this: Rethrowing"<<endl;
		throw;//Rethrow
	}
}
int main()
{
	int x, y;
	cout<<"Enter Dividend"<<endl;
	cin>>x;
	cout<<"Enter Divisor"<<endl;
	cin>>y;
	try
	{
		rethrowDemo(x,y);
	}
	catch(int p)
	{
		cout<<"Caught Divide by zero exception in main"<<endl;
	}
	return 0;
}
