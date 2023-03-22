#include<iostream>
#include<string>

using namespace std;

class Point
{
	private:
	float x;
	float y;
	
	public:
	Point(float x,float y)
	{
		this->x=x;
		this->y=y;
	}	
	Point()
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
//	float getXY()
//	{
//		float a[2];
//		a[0]=x;
//		a[1]=y;
//		return a;
//	}
	string toString()
	{
		cout<<"("<<x<<","<<y<<")"<<endl;
	}
};

class MovablePoint: public Point
{
	private:
	float xSpeed;
	float ySpeed;
	
	public:
	MovablePoint(float x,float y,float xSpeed,float ySpeed)
	{
		setXY(x,y);
		this->xSpeed=xSpeed;
		this->ySpeed=ySpeed;
	}	
	MovablePoint(float xSpeed,float ySpeed)
	{
		this->xSpeed=xSpeed;
		this->ySpeed=ySpeed;
	}
	MovablePoint()
	{
		
	}
	float getXSpeed()
	{
		return xSpeed;
	}
	float getYSpeed()
	{
		return ySpeed;
	}
	void setXSpeed(float xSpeed)
	{
		this->xSpeed=xSpeed;
	}
	void setYSpeed(float ySpeed)
	{
		this->ySpeed=ySpeed;
	}
	void setSpeed(float xSpeed,float ySpeed)
	{
		this->xSpeed=xSpeed;
		this->ySpeed=ySpeed;
	}
	float[] getspeed(){ 
	float a[]=new float[2];
	a[0]=xSpeed();
	a[1]=ySpeed();
	return a
	}
	
	string toString()
	{
		Point::toString();
		cout<<",speed=("<<xSpeed<<","<<ySpeed<<")";
	}
	MovablePoint move()
	{
		
	
	}
};




int main()
{
	
}