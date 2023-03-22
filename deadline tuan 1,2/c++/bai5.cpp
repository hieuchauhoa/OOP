#include<iostream>
#include<string>

using namespace std;

struct invoiceItem
{
	string id1,desc;
	int qty;
	double unitPrice;
};

invoiceItem nho;

void InvoiceItem(string id1, string desc,int qty,double unitPrice);
string getID(); 
string getDesc();
int getQty();
void setQty(int qty);
double getUnitPrice();
void setUnitPrice (double unitPrice);
double getTotal();
string toString();


int main()
{
	
	cout<<endl;
	return 0;
}

void InvoiceItem(string id1, string desc,int qty,double unitPrice)
{
	nho.id1=id1;
	nho.desc=desc;
	nho.qty=qty;
	nho.unitPrice=unitPrice;
}
string getID()
{
	return nho.id1;
}
string getDesc()
{
	return nho.desc;
}
int getQty()
{
	return nho.qty;
}
void setQty(int qty)
{
	nho.qty=qty;
}
double getUnitPrice()
{
	return nho.unitPrice;
}
void setUnitPrice (double unitPrice)
{
	nho.unitPrice=unitPrice;
}
double getTotal()
{
	return nho.unitPrice*nho.qty;
}
string toString()
{
	cout<<"InvoiceItem[id="<<nho.id1<<",desc="<<nho.desc<<",qty="<<nho.qty<<",unitPrice="<<nho.unitPrice<<"]"<<endl;
}