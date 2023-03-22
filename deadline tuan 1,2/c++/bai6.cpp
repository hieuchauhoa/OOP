#include<iostream>
#include<string>
using namespace std;

struct account
{
	int balance;
	string 	id1,name;
};



account nho={0,"",""};

void Account(string id1,string name);
void Account(string id1,string name,int balance);
string getId();
string getName();
int getBalance();
int credit(int amount);
int debit(int amount);
int transferTo(account &another,int amount);
string toString();

int main()
{	

	cout<<endl;
	return 0;	
}

void Account(string id1,string name)
{


	nho.id1=id1;
	

	nho.name=name;

}
void Account(string id1,string name,int balance)
{
	
	nho.id1=id1;
	
	nho.name=name;
	
	nho.balance=balance;
}

string getId()
{
	return nho.id1;
}

string getName()
{
	return nho.name;
}

int getBalance()
{
	return nho.balance;
}

int credit(int amount)
{
	nho.balance=amount;
}

int debit(int amount)
{
	if(amount<=nho.balance) nho.balance=nho.balance-amount;
	else cout<<"amount exceeded"<<endl;
}

int transferTo(account &another,int amount)
{
	if(amount<=nho.balance) another.balance=amount;
	else cout<<"amount exceeded"<<endl;
}

string toString()
{
	cout<<"account[id=" << nho.id1 << ",name=" <<nho.name<<",balance="<<nho.balance<<"]"<<endl;
}