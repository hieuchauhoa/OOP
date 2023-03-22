#include<iostream.h>
#include<string>
#include <unistd.h>


using namespace std;


struct customer
{
	int ID;
	string name;
	char gender;	
};

struct account
{
	int ID;
	customer cus;
	double balance;
	
};
customer nho;
account nho2;

void Customer(int ID,string name,char gender);
int getID();
string getName();
char getGender();
string toString();


void Account(int ID,customer cus,double balance);
void Account(int ID,customer cus);
int getIdIn();
customer getCustomer();
double getBalance();
void setBalance(double balance);
string toStringacc();
string getCustomerName();
account deposit(double amount);
account withdraw(double amount);




int main()
{
	
	

	cout<<endl;
	return 0;
}

void Customer(int ID,string name,char gender)
{
	nho.ID=ID;
	nho.name=name;
	nho.gender=gender;
}
int getID()
{
	return nho.ID;
}
string getName()
{
	cout<<nho.name<<endl;
}
char getGender()
{
	return nho.gender;
}
string toString()
{
	cout<<"name("<<nho.ID<<")";
}


void Account(int ID,customer cus,double balance)
{
	nho2.ID=ID;
	nho2.cus.ID=cus.ID;
	nho2.cus.name=cus.name;
	nho2.cus.gender=cus.gender;
	nho2.balance=balance;
	
	
	
}
void Account(int ID,customer cus)
{
	nho2.ID=ID;
	nho2.cus.ID=cus.ID;
	nho2.cus.name=cus.name;
	nho2.cus.gender=cus.gender;
}
int getIdIn()
{
	return nho2.ID;
}
customer getCustomer()
{
	toString();cout<<endl;
}
double getBalance()
{
	return nho2.balance;
}
void setBalance(double balance)
{
	nho2.balance=balance;
}
string toStringacc()
{
	cout<<"Balance="<<nho2.balance<<endl;
	toString(); 
	
	
}
string getCustomerName()
{	
	getName();
}
account deposit(double amount)
{
	nho2.balance=amount;
}
account withdraw(double amount)
{
	if(nho2.balance>amount)
	nho2.balance-=amount;
	else cout<<"amount withdrawn exceeds the current balance!";
}