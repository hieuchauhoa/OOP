#include<iostream>
#include<string>
#define PI  3.14159265358979323846

using namespace std;

struct circle
{	
	double radius;	
};

circle nho={1.0};

void Circle();
void Circle(double radius) ;
double getRadius();
void setRadius(double radius);
double getCircumference();
string toString();


int main()
{

	
	cout<<endl;
	return 0;
}

void Circle()
{
	nho.radius=1.0;
}

void Circle(double radius) 
{
	nho.radius=radius;
}

double getRadius()
{
	return nho.radius;
}

void setRadius(double radius)
{
	nho.radius=radius;
}

double getCircumference()
{
	return 2*nho.radius*PI;
}

string toString()
{
	cout<<"circle[radius="<<nho.radius<<"]"<<endl;
}