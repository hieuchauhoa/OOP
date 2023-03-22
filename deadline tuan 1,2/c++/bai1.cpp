#include<iostream>
#include<string>
#include<math.h>
#define PI  3.14159265358979323846
using namespace std;

struct circle
{
	double radius;
	string color;
};
circle nho={1.0,"red"};

void Circle();
void Circle(double radius);
void Circle(double radius,string color);
void Circle(double r);
double getRadius();
double getArea();
string getColor();
void setRadius(double radius);
void setColor(string color);
string toString();
double getArea();


int main()
{


	cout<<endl;
	return 0;
}

void Circle()
{
	nho.radius=1.0;
	nho.color="red";
}

void Circle(double radius)
{
	nho.radius=radius;	
	nho.color="red";
}

void Circle(double radius,string color)
{
    nho.radius=radius;	
	nho.color=color;
}

double getRadius()
{
	
	return nho.radius;
}

double getArea()
{
	return getRadius()*getRadius()*PI;
}

string getColor()
{
	cout<<nho.color;
}

void setRadius(double radius)
{
	nho.radius=radius;
}

void setColor(string color)
{
	nho.color=color;
}

string toString()
{
	cout<<"circle[radius=" <<nho.radius << ",color=" << nho.color << "]"<<endl;
	
}
 
