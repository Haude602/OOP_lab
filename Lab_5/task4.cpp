//WAP in CPP to handle divide by zero exception using the concept
//of exception handling.

#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"Enter two numbers a and b"<<endl;
cin>>a>>b;
int x=a-b;
try
{
if(x!=0)
cout<<"Result of a/x:"<<a/x<<endl;
else throw(x);
}
catch(int i)
{
cout<<"Exception caught"<<"X="<<x<<endl;
}
return 0;
}
