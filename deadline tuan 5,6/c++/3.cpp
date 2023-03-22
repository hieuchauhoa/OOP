#include<iostream>
#include<string>


using namespace std;


class Point2D
{
	private:
	float x;
	float y;
	
	public:
	Point2D(float x,float y)
	{
		this->x=x;
		this->y=y;
	}	
	Point2D()
	{
		x=0.0;
		y=0.0;
	}
	float getX()
	{
		return x;
	}
	float getY()
	{
		return y;
	}
	void setX(float x)
	{
		this->x=x;
		
	}
	void setY(float y)
	{
		this->y=y;
	}
	void setXY(float x,float y)
	{
		this->x=x;
		this->y=y;
	}

	
	string toString()
	{
		cout<<"("<<x<<","<<y<<")"<<endl;
	}
};

class Point3D: public Point2D
{
	private:
	float z;
	
	public:
	Point3D(float x,float y,float z)
	{
		setXY(x,y);
		this->z=z;
	}	
	Point3D()
	{
		z=0.0;
	}
	float getZ()
	{
		return z;
	}
	void setZ(float z)
	{
		this->z=z;
	}
	void setXYZ(float x,float y,float z)
	{
		setXY(x,y);
		this->z=z;
	}

	string toString()
	{
	
		cout<<"("<<Point2D::getX()<<","<<Point2D::getY()<<","<<z<<")"<<endl;
	}
	
	
	
	
};




int main()
{

}