#include<iostream>
#include<string>
#define PI  3.14159265358979323846


using namespace std;

class Circle
{
	private:
		double radius;
		string color;
	
	public:
		Circle()
		{
			radius=1.0;
			color="red";
		}
		Circle(double radius)
		{
			this->radius=radius;
		} 
		Circle(double radius,string color)
		{
 		   	this->radius=radius;	
			this->color=color;
		}

		double getRadius()
		{
	
			return radius;
		}

		double getArea()
		{
			return getRadius()*getRadius()*PI;
		}

		string getColor()
		{
			cout<<color;
		}

		void setRadius(double radius)
		{
			this->radius=radius;
		}

		void setColor(string color)
		{
			this->color=color;
		}
 	
		string toString()
		{
			cout<<"circle[radius=" <<radius << ",color=" << color << "]"<<endl;
	
		}	
};

class Cylinder: public Circle
{
	private:
	     double height;
 	public:
	Cylinder() 
	{
		height=1.0;
	}
	Cylinder(double radius) 
	{
		height=1.0;

	}
	Cylinder(double radius,double height)
	{
		height=height;
		setRadius(radius);
		
	} 
	Cylinder(double radius,double height,string color)
	{
		height=height;
		setRadius(radius);
		setColor(color);
	}
	double getHeight()
	{
		return height;
	}
	void setHeight (double height)
	{
		height=height;
	}


};



int main()
{
	Cylinder c;
	c=Cylinder(2,3,"blue");
	c.toString();
	

	
	
	
	return 0;
	
}


