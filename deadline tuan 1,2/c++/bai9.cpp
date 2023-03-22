#include<iostream>
#include<string>

using namespace std;

struct ball
{
	float x,y,xDelta,yDelta;
	int radius;	
	int speed,direction;
};

ball nho;

void Ball(float x,float y,int radius,int speed,int direction);
float getX();
void setX(float x);
float getY() ;
void setY(float y);
int getRadius () ;
void setRadius(int radius);
float getXDelta();
void setXDelta(float xDelta);
float getYDelta() ;
void setYDelta(float yDelta);
void move();
void reflectHorizontal();
void reflectVertical();
string toString();

int main()
{
	cout<<endl;
	return 0;
}

void Ball(float x,float y,int radius,int speed,int direction)
{
	nho.x=x;
	nho.y=y;
	nho.radius=radius;
	nho.xDelta=speed;
	nho.yDelta=direction;
}
float getX()
{
	return nho.x;
}
void setX(float x)
{
	nho.x=x;
}
float getY() 
{
	return nho.y;
}
void setY(float y)
{
	nho.y=y;
}
int getRadius () 
{
	return nho.radius;
}
void setRadius(int radius)
{
	nho.radius=radius;
}
float getXDelta()
{
	return nho.xDelta;
}
void setXDelta(float xDelta)
{
	nho.xDelta=xDelta;
}
float getYDelta() 
{
	return nho.yDelta;
}
void setYDelta(float yDelta)
{
	nho.yDelta=yDelta;
}
void move()
{
	nho.x+=nho.xDelta;
	nho.y+=nho.yDelta;
}
void reflectHorizontal()
{
	nho.xDelta=-nho.xDelta;
}
void reflectVertical()
{
	nho.yDelta=-nho.yDelta;
}
string toString()
{
	cout<<"Ball[("<<nho.x<<","<<nho.y<<")"<<",speed=("<<nho.xDelta<<","<<nho.yDelta<<")]";
}
