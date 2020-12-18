
#include<iostream>
using namespace std;

class student
{
	protected:
		int roll;
		char name[100];
	public:
		void getdata()
		{
			cout<<"\nEnter name and Roll no\n";
			cin.getline(name,100);
			cin>>roll;
		}
};
class cr
{
	protected:
		char gmail[100];
	public:
		void getdata()
		{
			cout<<"\n Enter Gmail adddress\n";
			cin.getline(gmail,100);
		}
};

class employee: public student , public cr
{
	protected:
		char org_name[100];
	public:
		void setdata()
		{
			cout<<"Enter name of school/college\n";
			cin.getline(org_name,100);
		}
};
class person:public employee
{
	protected:
		char gender[50];
	public:
		void getperson()
		{
			cout<<"\nEnter your gender\n";
			cin.getline(gender,50);
		}
		void showdata()
		{
			cout<<"\nDetails of  person are\n ";
			cout<<"Name: "<<name<<"\nRoll no:"<<roll<<"\nGmail:"<<gmail<<"\nSchool/college"<<org_name<<"\nGender"<<gender;
		}
};
int main()
{
	person* ptr=new person;
	ptr->student::getdata();  //removes ambiguity as both parent class have member function with same name
	ptr->cr::getdata(); //removes ambiguity
	ptr->setdata();
	ptr->getperson();
	ptr->showdata();
	delete ptr;
	return 0;
}

