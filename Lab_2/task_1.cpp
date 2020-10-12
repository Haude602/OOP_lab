//Write a program in CPP to input the name, roll, marks and address of a student
// from the user and display the entered details using the concept of class and object

#include <iostream>
using namespace std;
class student
{
	int roll,marks;
	char name[15];
	char address[25];
	public:
		void getdata()
		{
			cout<<"Enter name and address"<<endl;
			cin>>name>>address;
			cout<<"Enter roll and marks"<<endl;
			cin>>roll>>marks;
		}
		void showdata()
		{
			cout<<"Entered details are"<<endl;
			cout<<endl;
			cout<<"Name: "<<name<<"  Address: "<<address<<endl;
			cout<<"Roll: "<<roll<<"  Marks: "<<marks<<endl;
			
		}
		
};

int main()
{
	student s;
	int n;
	s.getdata();
	s.showdata();
	return 0;
}
