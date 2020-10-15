//Write a program in CPP to find the product of two  3 by 3 matrices entered by the user by overloading binary * operator.  
#include <iostream>
using namespace std;

class matrix
{
	int a[5][5];
	int c;
	int r;
	public:
		
		void getdata()
		{
			cout<<"Enter no of rows and columns"<<endl;
			cin>>r>>c;
			cout<<"Enter the matrix elements"<<endl;
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				{
					cout<<"Enter "<<"a"<<i+1<<j+1<<" elements"<<endl;
					cin>>a[i][j];
					
					
				}
			}
			
		}
			void showdata()
		{
			cout<<"The matrix is"<<endl;
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				{
					cout<<a[i][j]<<" ";
					
					
				}
				cout<<endl;
			}
			
		}
		
			matrix operator *(matrix m)
		{
			matrix temp;
			int sum;
			temp.r=r;
			temp.c=m.c;
			for(int i=0;i<temp.r;i++)
			{
				for(int j=0;j<temp.c;j++)
				{
					temp.a[i][j]=0;
				}
			}
			if(c==m.r)
			{
				for(int i=0;i<temp.r;i++)
				{
					for(int j=0;j<temp.c;j++)
					{
						sum=0;
						for(int k=0;k<m.r;k++)
						{
							sum=sum + a[i][k]*m.a[k][j];
						}
						temp.a[i][j]=sum;
					}
				}
			}
			return temp;
		}
};

int main()
{
	matrix m1,m2,m3;
	m1.getdata();
	m1.showdata();
	m2.getdata();
	m2.showdata();
	m3=m1*m2;
	m3.showdata();
	return 0;
	
}
