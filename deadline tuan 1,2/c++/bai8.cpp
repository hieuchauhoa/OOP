#include<iostream>
#include<string>

using namespace std;
struct timet 
{
	int hour,minute,second;	
};

timet nho;

void Time(int hour,int minute,int seccond);
int getHour();
int getMinute();
int getSeccond();
void setHour(int hour) ;
void setMinute(int minute);
void setSecond(int second);
void setTime(int hour,int minute,int seccond);
string toString();
timet nextsecond();
timet previousSecond();

int main()
{
	
	
	
	
	cout<<endl;
	return 0;
}

void Time(int hour,int minute,int seccond)
{
	if(hour<0||hour>23||minute<0||minute>59||seccond<0||seccond>59)
	{
		cout<<"no input validation needed"<<endl;
	}
	else 
	{
		nho.hour=hour;
		nho.minute=minute;
		nho.second=seccond;
	}
}

int getHour()
{
	return nho.hour;
}

int getMinute()
{
	return nho.minute;
}

int getSeccond()
{
	return nho.second;
}

void setHour(int hour) 
{
	if(hour<0||hour>23)
	{
		cout<<"no input validation needed"<<endl;
	}
	else nho.hour=hour;
}

void setMinute(int minute)
{
	if(minute<0||minute>59)
	{
		cout<<"no input validation needed"<<endl;
	}
	else nho.minute=minute;
}

void setSecond(int second)
{
	if(second<0||second>59)
	{
		cout<<"no input validation needed"<<endl;
	}
	else nho.second=second;
}

void setTime(int hour,int minute,int second)
{
	if(hour<0||hour>23||minute<0||minute>59||second<0||second>59)
	{
		cout<<"no input validation needed"<<endl;
	}
	else 
	{
		nho.hour=hour;
		nho.minute=minute;
		nho.second=second;
	}
}

string toString()
{
	cout<<nho.hour<<":"<<nho.minute<<":"<<nho.second<<endl;
}

timet nextsecond()
{
	nho.second=nho.second+1;
	if(nho.second==60&&nho.minute==59&&nho.hour==23)
	{
		nho.second=0;
		nho.hour=0;
		nho.minute=0;
	}
	if(nho.second=60&&nho.minute==59&&nho.hour!=23)
	{
	    nho.second=0;
		nho.hour++;
		nho.minute=0;
	}
	toString();
}

timet previousSecond()
{
	nho.second=nho.second-1;
	if(nho.second<0&&nho.minute==0&&nho.hour==0)
	{
	    nho.second=59;
		nho.hour=23;
		nho.minute=59;
	}
	if(nho.second<0&&nho.minute==0&&nho.hour!=0)
	{
	    nho.second=59;
		nho.hour--;
		nho.minute=59;
	}
	toString();
}
