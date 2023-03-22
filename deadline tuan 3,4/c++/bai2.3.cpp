#include<iostream>
#include<string>
#include<math.h>
using namespace std;


struct myPoint
{
	int x,y;
};
myPoint nho;


void MyPoint();
void MyPoint(int x,int y);
int getX();
void setX(int x); 
int getY();
void setY(int y);
void getXY();
void setXY(int x,int y);
string toString();
double distancea(int x, int y);
double distance(myPoint another);
double distance();




int main()
{
	MyPoint(10,2);
	myPoint a={0,0};
cout<<distancea(12,2)<<endl;
}

void MyPoint()
{
	nho.x=0;
	nho.y=0;
}
void MyPoint(int x,int y)
{
	nho.x=x;
	nho.y=y;
}
int getX()
{
	return nho.x;
}
void setX(int x)
{
	nho.x=x;
}
int getY()
{
	return nho.y;
}
void setY(int y)
{
	nho.y=y;
}
void getXY()
{
	cout<<nho.x<<" "<<nho.y<<endl;
}
void setXY(int x,int y)
{
	nho.x=x;
	nho.y=y;
}
string toString()
{
	cout<<"("<<nho.x<<","<<nho.y<<")"<<endl;
	
}
double distancea(int x, int y)
{
	return sqrt((x-nho.x)*(x-nho.x)+(y-nho.y)*(y-nho.y));
}
double distance(myPoint another)
{
	return sqrt((another.x-nho.x)*(another.x-nho.x)+(another.y-nho.y)*(another.y-nho.y));
}
double distance()
{
	return sqrt((0-nho.x)*(0-nho.x)+(0-nho.y)*(0-nho.y));	
}