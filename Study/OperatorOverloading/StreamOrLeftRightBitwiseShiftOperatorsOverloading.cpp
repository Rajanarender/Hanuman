#include<iostream>
using namespace std;

/********************************************************
cin - object of istream class
>> - Extraction operator(Right shift operator in C)
cin>>

cout- object of ostream class
<< - Insertion operator(Left shift operator in C)
cout<<

NOTE: 
Both istream and ostream are Global classes present in iostream HEADER

friend function: //This is Mandatory
ostream/istream object - Global scope 
class object - local scope
********************************************************/

/*
class A
{
	int x;
	public:
	A():x(0)
	{}

	//We can declare and define friend function here
	friend istream& operator>>(istream &in, A &obj) //Mandatory to remove const for obj here
	{
		in>>obj.x; //private members can be accessed here
		return in; //Mandatory
	}

	friend ostream& operator<<(ostream &out, const A &obj)
	{
		out<<obj.x;
		return out;
	}
};

int main()
{
	A a;
        cout<<"Enter some value: ";
	cin>>a;
	cout<<"The o/p is: ";
	cout<<a;
}

*/


class A
{
	double real;
        double img;
	public:
	A():real(0.0),img(0.0)
	{}

	//We can declare and define friend function here
	friend istream& operator>>(istream &in,A &obj) //Mandatory to remove const for obj here
	{
                cout<<"Enter Real value:";
		in>>obj.real; //private members can be accessed here
                cout<<"Enter Imaginary value:";
                in>>obj.img;
		return in; //Mandatory
	}

	friend ostream& operator<<(ostream &out,const A &obj)
	{
/*
		out<<obj.real;
                out<<"+i";
                out<<obj.img;
*/
                out<<obj.real<<"+i"<<obj.img; //we can write in precise way like this
		return out;
	}
};

int main()
{
	A a;
        cout<<"Enter Real and Imaginary numbers:\n";
	cin>>a;
	cout<<"The o/p is: ";
	cout<<a;
}






