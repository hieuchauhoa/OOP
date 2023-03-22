#include<iostream>
#include<string>


using namespace std;

class Person
{
	private:
	string name;	
	string address;
	
	public:
	Person()
	{
		
	}
	Person(string name,string address)
	{
		this->name=name;
		this->address=address;
	}
	
	string getName()
	{
		return name;	
	}
	void setName(string name)
	{
		this->name=name;
	}
	
	string getAddress()
	{
		cout<<address;
	}
	
	void setAddress(string address)
	{
		this->address=address;
	}
	
	string toString()
	{
		cout<<"Person[name="<<name<<",address="<<address<<"]"<<endl;
		
	}
};

class Student: public Person
{
	private:
	string program;	
	int year;
	double fee;
	
	public:
	Student(string name,string address,string program,int year,double fee)
	{
		setName(name);
		setAddress(address);
		this->program=program;
		this->year=year;
		this->fee=fee;
	}
	
	string getProgram()
	{
		cout<<program;
	}
	
	void setProgram(string program)
	{
		this->program=program;
	}
	int getYear()
	{
		return year;
	}
	void setYear(int year)
	{
		this->year=year;
	}
	double getFee()
	{
		return fee;
	}
	void setFee(double fee)
	{
		this->fee=fee;
	}
	string toString()
	{
		
		
		cout<<"Student[Person[name="<<getName()<<",address=";getAddress();
		cout<<"],program="<<program<<",year="<<year<<",fee="<<fee<<"]"<<endl;
		
	}	
};

class Staff: public Person
{
	private:
	string school;
	double pay;
	
	public:
	Staff(string name,string address,string school,double pay)
	{
		setName(name);
		setAddress(address);
		this->school=school;
		this->pay=pay;
	}
	
	string getSchool()
	{
		cout<<school;
	}
	void setSchool(string school)
	{
		school=school;	
	}
	double getPay()
	{
		return pay;
	}
	void setPay(double pay)
	{
		pay=pay;
	}
	string toString()
	{
		cout<<"Staff[Person[name="<<getName()<<",address=";getAddress();
		cout<<"],school="<<school<<",pay="<<pay<<"]"<<endl;
	}
};














int main()
{
	Staff h=Staff("hieu","chauhoa","saigon",100.01);
	h.toString();
	
}