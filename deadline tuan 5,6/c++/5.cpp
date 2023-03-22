#include<iostream>
#include<string>
#define PI 3.14159265358979

using namespace std;

class Shape
{
	private:
	string color;
	bool filled;
	
	public:
	Shape()
	{
		color="red";
		filled=true;
	}
	Shape(string color,bool filled)
	{
		color=color;
		filled=filled;		
	}
	string getColor()
	{
		cout<<color<<endl;
	}
	bool isFilled()
	{
		return filled;
	}
	void setColor(string color)
	{
		color=color;
	}
	void setFilled(bool filled)
	{
		filled=filled;
	}
	string toString()
	{
		cout<<"Shape[color="<<color<<",filled"<<filled<<"]"<<endl;
	}		
};
class Circle:public Shape
{
	private:
	double radius;
	
	public:
	Circle()
	{
		radius=1.0;
	}
	Circle(double radius)
	{
		radius=radius;
	}
	Circle(double radius,string color,bool filled)
	{
		radius=radius;
		setColor(color);
		setFilled(filled);
	}
	double getRadius()	
	{
		return radius;
	}
	void setRadius(double radius)
	{
		radius=radius;
	}
	double getArea()
	{
		long t=radius*radius*PI;
		return t;
	}
	double getPerimeter()
	{
		return 2*radius*PI;
	}
	string toString()
	{
		cout<<"Circle[Shape[color="<<",filled="<<"],radius="<<radius<<"]"<<endl;
	}	
};
class Rectangle:public Shape
{
	private:
	double width;
	double length;
	
	public:
	Rectangle()
	{
		width=1.0;
		length=1.0;
	}	
	Rectangle(double width,double length)
	{
		width=width;
		length=length;
	}
	Rectangle(double width,double length,string color,bool filled)
	{
		width=width;
		length=length;
	}
	double getWidth()
	{
		return width;
	}
	double getLength()
	{
		return length;
	}
	void setWidth(double Width)
	{
		width=width;
	}
	void setLength(double length)
	{
		length=length;
	}
	double getArea()
	{
		return width*length;
	}
	double getPerimeter()
	{
		return (width+length)/2;
	}
	string toString()
	{
		
	}
};




int main()
{
	
}