//Write a menu driven program in CPP to illustrate the concept of complete input/output operations on data files. Use a class named
//"student" with members name, roll, marks and address to represent a record.
//Your program must be able to do following file operations:
//i. Write n records to the file.
//ii. Read current records stored on the file.
//iii. Update a record on the file.
//iv. Search a record on the file.
//v. Modify a record on the file.
//vi. Delete a record on the file.
//vii.Compute the no. of records and total file size. 

#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdlib>
#include<cstring>
#include<conio.h>

using namespace std;
class student
{
	protected:
	int roll;
	float marks;
	char name[100];
	char address[100];
	public:
		void getdata()
		{
			cout<<"\nEnter roll no and markks\n";
			cin>>roll>>marks;
			cout<<"\nEnter name and address\n";
			cin>>name>>address;
			
		}
		void putdata()
		{
			cout<<setw(20)<<name<<setw(10)<<roll<<setw(20)<<marks<<setw(30)<<address<<"\n";
			
		}
		char* getname()
		{
			return name;
		}
		int getroll()
		{
			return roll;
		}
};
void action(student s)
{
	int choice,roll,object,isfound;			
	fstream inout;
	cout<<"\nSelect your interest\n";
	cout<<"\n1.Write records into file\n";
	cout<<"\n2.Read records from file\n";
	cout<<"\n3.Update records in the file\n";
	cout<<"\n4.Search records from a file\n";
	cout<<"\n5.Modify records of a file\n";
	cout<<"\n6.Delete records of a afile\n";
	cout<<"\n7.Count number of objects and total filesize in the file\n";
	cin>>choice;
	

	switch(choice)
	{
		case 1://write into the file
			inout.open("student.txt",ios::out);
			int z;
			cout<<"\nEnter number of students\n";
			cin>>z;
			for(int i=0;i<z;i++)
			{
				s.getdata();
				inout.write((char*)&s,sizeof(s));
			}
			cout<<"File written";
			inout.close();
			break;
		
		case 2://Read records from file
			inout.open("student.txt",ios::in);
			cout<<"\nContents of the file are\n";
			cout<<setw(14)<<"name"<<setw(15)<<"roll"<<setw(20)<<"marks"<<setw(30)<<"address"<<"\n";
			while(inout.read((char*)&s,sizeof(s)))
			{
				s.putdata();
				
			}
			inout.close();
			break;
		
		case 3://Update records
			inout.open("student.txt",ios::app);
			cout<<"\nAdd records\n";
			s.getdata();
			inout.write((char*)&s,sizeof(s));
			cout<<"\nRecord added\n";
			inout.close();
			break;
		
		case 4://Search record(Most difficult)
			inout.open("student.txt",ios::in);
			char search_name[50];
			cout<<"\nEnter name you want to search \n";
			cin>>search_name;
			isfound=0;
			inout.seekg(0,ios::beg);
			while(inout.read((char *)&s,sizeof(s)))
			{
				if(strcmp(s.getname(),search_name) == 0)
				{
					isfound=1;
					cout<<"Searched record!:"<<endl;
					cout<<setw(10)<<"name"<<setw(15)<<"roll"<<setw(20)<<"marks"<<setw(30)<<"address"<<"\n";
					s.putdata();
				}
			}
			if(isfound==0)
			{
				cout<<"The record with the name "<<search_name<<" is not found";
				inout.close();
		
			}
			break;	
		
		case 5://Modify records
			inout.open("student.txt",ios::out|ios::in|ios::ate);
			int location;
			object=isfound=0;
			cout<<"Enter Roll number:"<<endl;
			cin>>roll;
			inout.seekg(0,ios::beg);//seekg() is used to move the get pointer to a desired location with respect to a reference point.
			while(inout.read((char *)&s,sizeof(s)))
			{
				++object;
				if(s.getroll()==roll)
				{
				isfound=1;
				location=(object-1)*sizeof(s);
				inout.seekp(location,ios::beg);//seekp() is used to move the put pointer to a desired location with respect to a reference point.
				cout<<"Enter new data"<<endl;
				s.getdata();
				inout.write((char *)&s,sizeof(s))<<flush;
				cout<<"Record Modified!!!"<<endl;
				} 
			}
			if(isfound==0)
			{
				cout<<"\nThe record with the roll number "<<roll<<"is not found\n";
				inout.close();
				
				
			}
			break;
		case 6://Delete Record
			inout.open("student.txt",ios::in);
			student st[48];
			int i,j;
			i=0;
			cout<<"Enter Roll number:"<<endl;
			cin>>roll;
			inout.seekg(0,ios::beg);
			while(inout.read((char *)&st[i],sizeof(st[i])))
			{
				++i;
			}
			j=i;
			inout.close();
			inout.open("student.txt",ios::out);
			for(i=0;i<j;i++)
			{
				if(st[i].getroll()!=roll)
				{
					inout.write((char *)&st[i],sizeof(st[i]));
				}
			}
			cout<<"Record Deleted!!!"<<endl;
			inout.close();
			break;
			
		case 7://Calculate the filesize and the number f object
			int filesize;
			inout.open("student.txt",ios::in);
			inout.seekg(0,ios::end);
			filesize=inout.tellg();
			cout<<"\nThe total filesize is\t"<<filesize<<"\tbyte\n";
			cout<<"\nThe number of objects is"<<(filesize/sizeof(s));
			inout.close();
			break;
			
		default:
			cout<<"\nEntered choice is wrong input\n";
			break;
	}
}
int main()
{
	ab:
	student s;
	action(s);
	getch();
	system("cls");
	goto ab;
	return 0;
}
