#include<iostream>
#include<string>


using namespace std;

struct rectangle
{
	float lenght,width;
};

rectangle nho={1.0,1.0};

void Rectangle();
void Rectangle(float length,float width);
float getLength();
void setlength(float length);
float getWidth();
void setWidth(float width);
double getArea();
double getPerimeter() ;
string toString();


int main()
{
	

	cout<<endl;
	return 0;
}

void Rectangle()
{
	nho.lenght=1.0;
	nho.width=1.0;
}
void Rectangle(float length,float width)
{
	nho.lenght=length;
	nho.width=width;
}
float getLength()
{
	return nho.lenght;
}

void setlength(float length)
{
	nho.lenght=length;
}
float getWidth()
{
	return nho.width;
}
void setWidth(float width)
{
	nho.width=width;
}
double getArea()
{
	return nho.lenght*nho.width;
}
double getPerimeter() 
{
	return (nho.lenght+nho.width)*2;
}
string toString()
{
	cout<<"Rectangle[length="<<nho.lenght<<",width="<<nho.width<<"]"<<endl;
}