//WAP in CPP to convert the co-ordinates from Cartesian system to polar system using the
// concept of user defined to user defined conversion by writing conversion routine in source class. 
#include<iostream>
#include<cmath>
using namespace std;
class polar
{
private:
float r,theta;
public:
polar()
{
r=0;theta=0;
}
polar(float rad,float ang)
{
r=rad;
theta=ang;
}
void showdata()
{
cout<<"The co-ordinate in polar form(r,theta) is"<<endl;
cout<<"("<<r<<","<<theta<<")";
} };
class rectangular
{
private:
float x,y;
public:
rectangular()
{
cout<<"Enter co-ordinate in cartesian system(x,y)"<<endl;
cin>>x>>y;
}
operator polar()
{
float rad,ang;
rad=sqrt(pow(x,2)+pow(y,2));
ang=atan(y/x)*180/3.14;
return polar(rad,ang);
}
};
int main()
{
polar pol;
rectangular rect;
pol=rect; //pol=rect.operator();
pol.showdata();
return 0;
}
