//Write a program in CPP to convert the distance in meters
// entered by the user into distance in feet and inch using the concept of basic to user defined data conversion

#include<iostream>
using namespace std;
class Distance
{
	private:
	float feet;
	float inch;
	public:
	Distance()
	{
		feet = 0.00;
		inch = 0.00;
	}
	Distance(float m)
	{
		float feetf = 3.2808 *m;
		feet = int(feetf);
		inch = 12*(feetf-feet);
	}
	void showdata()
	{
		cout<<"The distance is"<<endl;
		cout<<feet<<"Feet"<<inch<<"Inch";
	}
};
int main()
{
	Distance d;
	float meters;
	cout<<"Enter distance in meters";
	cin>>meters;
	d = meters; //d.Distance(meters);
	d.showdata();
	return 0;
}
