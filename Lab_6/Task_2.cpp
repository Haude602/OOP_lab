//WAP in CPP to illustrate the concept of multiple inheritance using following diagram.
//  |student|   ---
//                   >  |Officer|
//  |Eployee|   ---


#include<iostream>
using namespace std;
class student
{
	protected:
	int roll;
	char name[50];
	public:
	void getdata()
{
	cout<<"Enter name and roll number"<<endl;
	cin.getline(name,50);
	cin>>roll;
}
};

class employee
{
	protected:
	int id;
	char org_name[25];
	public:
	void getdata()
{
	cout<<"Enter id and organisation name"<<endl;
	cin>>id>>org_name;
}
};
	class officer : public student, public employee
{
	protected:
	int working_hr;
	public:
	void getofficer()
{
		cout<<"Enter working hour"<<endl;
		cin>>working_hr;
}
	void showdata()
{
	cout<<"\nThe information of officer is: "<<"Name:"<<name<<"\nRoll:"<<roll<<"\nID:"<<id<<"\nOrganisation name:"<<org_name<<"\nWorking hour:"<<working_hr;

}
};
int main()
{
	officer* ptr = new officer;
	ptr->student::getdata();  //removes ambiguity as both parent class have member function with same name
	ptr->employee::getdata(); //removes ambiguity
	ptr->getofficer();
	ptr->showdata();
	delete ptr;
	return 0;
}
