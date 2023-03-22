#include<iostream>
#include<string>
#include<windows.h>
#include<stdio.h>

using namespace std;
struct author
{
	string name,email;
	char gender;	
};

struct book
{
	string name;
	author au;
	double price;
	int qty;	
};
author nho;
book nho2;

void Author(string name,string email,char gender);
string getName();
string getEmail();
void setEmail(string email);
char getGender();
string toString();

void Book(string name,author a,double price);
void Book(string name,author nho,double price,int qty);
string getNameBook();
author getAuthor();
double getPrice();
void setPrice(double price);
int getQty();
void setQty(int qty);
string toStringBook();



int main()
{
	
	Author("hieu","hieuchauhoa@gmail.com",'n');
	
    Book("doraemon",nho,15000);
    toStringBook();
	
	
	cout<<endl;
    return 0;
	
}


void Author(string name,string email,char gender)
{
	nho.name=name;
	nho.email=email;
	nho.gender=gender;

}

string getName()
{
	cout<<nho.name<<endl;	
}
string getEmail()
{
	cout<<nho.email<<endl;
}
void setEmail(string email)
{
	nho.email=email;
}
char getGender()
{
	cout<<nho.gender<<endl;
}
string toString()
{
	cout<<"Author{name="<<nho.name<<",email="<<nho.email<<",gender="<<nho.gender<<"]"<<endl;
}


void Book(string name,author a,double price)
{
 	nho2.name=name;
	nho2.au.name=a.name;
	nho2.au.email=a.email;
	nho2.au.gender=a.gender;
	nho2.price=price;
}
void Book(string name,author nho,double price,int qty)
{
	nho2.name=name;
	nho2.au.name=nho.name;
	nho2.au.email=nho.email;
	nho2.au.gender=nho.gender;
	nho2.price=price;
	nho2.qty=qty;
}
string getNameBook()
{
	cout<<nho2.name<<endl;
}
author getAuthor()
{
	toString();
}
double getPrice()
{
	cout<<nho2.price<<endl;
}
void setPrice(double price)
{
	nho2.price=price;
}
int getQty()
{
	return nho2.qty;
}
void setQty(int qty)
{
	nho2.qty=qty;
}
string toStringBook()
{
    
	cout<<"Book[name="<<nho2.name<<",Author[name="<<nho.name<<",email="<<nho.email<<",gender="<<nho.gender
	<<"],price="<<nho2.price<<",qty="<<nho2.qty<<"]";

}