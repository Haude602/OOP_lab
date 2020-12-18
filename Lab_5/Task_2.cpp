// Write a program in CPP to find are of rectangle with intergers and float dimensions using concept of template class.

#include<iostream>
using namespace std;
template<class T>
class rectangle
{
	protected:
	T a,b;
	T area;
		
	public:
		void getdata()
		{
			cout<<"\nEnter length and breadth\n";
			cin>>a>>b;
		}
		void calcarea()
		{
			area = a*b;
		}
		void showdata()
		{
			cout<<"\n Area of rectangle is "<<area;
		
		}
	
};
int main()
{
rectangle <int>ri;
rectangle <float>rf;
cout<<"\n_______________For Integer Values_____________________\n";
ri.getdata();
cout<<"\n_____________For Float Values_______________________ \n";
rf.getdata();
ri.calcarea();
ri.showdata();
rf.calcarea();
rf.showdata();
return 0;
}
