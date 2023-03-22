#include<iostream>
#include<string>
using namespace std;

struct Employee
{
	int salary,id1;
	string 	firstName,lastName;
};

void Emloyee(int id1, string firstName,string lastName ,int salary);
Employee nho;
int getId();
int getSalary();
string getFistName();
string getlastName();
string name();
int raiseSalry(int percent);
int getAnnualSalary();
void setSalary(int &salary);
string toString();

int main()
{
	Emloyee(123,"minh","hieu",1234);
	cout<<getId()<<endl;
	cout<<getSalary()<<endl;
	cout<<getFistName()<<endl;
	cout<<getlastName()<<endl;
	cout<<name()<<endl;
	toString();
	
cout<<endl;
return 0;	
}

void Emloyee(int id1, string firstName,string lastName ,int salary)
{	
	nho.id1=id1;
	
	nho.firstName=firstName;
		
	nho.lastName=lastName;
		
	nho.salary=salary;
}

int getId()
{
	return nho.id1;
}

int getSalary()
{
	return nho.salary;
}

string getFistName()
{
	return nho.firstName;
}

string getlastName()
{
	return nho.lastName;
}

string name()
{
 	return nho.firstName+" "+nho.lastName;	
}

void setSalary(int &salary)
{
 	cout<<"set? ";
 	cin>>salary;
 	nho.salary=salary;	
}

int getAnnualSalary()
{
	return nho.salary*12;
}

int raiseSalry(int percent)
{
	nho.salary=nho.salary*percent/100+nho.salary;
	return 	nho.salary ;
}

string toString()
{
	
	cout<<nho.id1<<", "<<nho.firstName<<" "+nho.lastName<<", "<<nho.salary;
}