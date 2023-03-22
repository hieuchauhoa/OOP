#include<iostream>
#include<string>

using namespace std;

struct date
{
	int day,month,year;
};

date nho;

void Date(int day,int month,int year);
int getDay();
int getMonth();
int getYear();
void setDay(int day) ;
void setMonth(int month);
void setYear(int year);
void setDate(int day,int month,int year);
string toString();


int main()
{


	cot<<endl;
	return 0;
}

void Date(int day,int month,int year)
{
		if(day<1||day>31||month<1||month>12||year<1900||year>9999)
	{
		cout<<"no input validation needed"<<endl;
	}
	else	
	{
		nho.day=day;
		nho.month=month;
		nho.year=year;
	}
}

int getDay()
{
	return nho.day;
}

int getMonth()
{
	return nho.month;
}

int getYear()
{
	return nho.year;
}

void setDay(int day) 
{
	if(day<1||day>31)
	{
		cout<<"no input validation needed"<<endl;
	}
	else nho.day=day;
}

void setMonth(int month) 
{
	if(month<1||month>12)
	{
		cout<<"no input validation needed"<<endl;
	}
	else nho.month=month;
}

void setYear(int year) 
{
	if(year<1900||year>9999)
	{
		cout<<"no input validation needed"<<endl;
		
	}
	else	nho.year=year;
}

void setDate(int day,int month,int year)
{
	if(day<1||day>31||month<1||month>12||year<1900||year>9999)
	{
		cout<<"no input validation needed"<<endl;
	}
	else	
	{
		nho.day=day;
		nho.month=month;
		nho.year=year;
	}
}

string toString()
{
	cout<<nho.day<<"/"<<nho.month<<"/"<<nho.year<<endl;
}