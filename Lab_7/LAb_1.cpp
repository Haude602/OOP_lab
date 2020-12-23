//WAP in CPP to illustrate the concept of reinterpret_cast operator

#include <iostream>
using namespace std;

int main()
{
	int a=65, *iptr=&a;
	char ch='C', *cptr=&ch;
	cptr = reinterpret_cast <char *> (iptr);
	cout<<"Value at cptr:"<<*cptr<<endl;
	return 0;
	
}

