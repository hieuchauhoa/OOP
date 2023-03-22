#include<iostream.h>
#include<string>


using namespace std;


struct customer
{
	int ID,discount;
	string name;	
};

struct invoice
{
	int ID;
	customer cus;
	double amount;
	
};
customer nho;
invoice nho2;

void Customer(int ID,string name,int discount);
int getID();
string getName();
int getDiscount();
void setDiscount(int discount);
string toString();

void Invoice(int ID,customer cus,double amount);
int getIdIn();
customer getCustomer();
string getAmount();
void setAmount(double amount);
string getCustomerName();
double getAmountAfterDiscount();



int main()
{
	
	cout<<endl;
	return 0;
}

void Customer(int ID,string name,int discount)
{
	nho.ID=ID;
	nho.name=name;
	nho.discount=discount;
}
int getID()
{
	return nho.ID;
}
string getName()
{
	cout<<nho.name<<endl;
}
int getDiscount()
{
	return nho.discount;
}
void setDiscount(int discount)
{
	nho.discount=discount;
}
string toString()
{
	cout<<"name("<<nho.ID<<")"<<endl;
}



void Invoice(int ID,customer cus,double amount)
{
	nho2.ID=ID;
	nho2.cus.ID=cus.ID;
	nho2.cus.name=cus.name;
	nho2.cus.discount=cus.discount;
	nho2.amount=amount;
}
int getIdIn()
{
	return nho2.ID;
}
customer getCustomer()
{
	toString();
}
string getAmount()
{
	cout<<nho2.amount<<endl;
	
}
void setAmount(double amount)
{
	nho2.amount=amount;
}
string getCustomerName()
{
	getName();
}
double getAmountAfterDiscount()
{
	return nho.discount*nho2.amount/100;
}
