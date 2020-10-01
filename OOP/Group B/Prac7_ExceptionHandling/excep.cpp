#include "iostream"

#include <exception>
using namespace std;

class MyException : public exception {
 public:
    char * what () {
      cout<< "\nC++ Exception\n";
   }
};
class license
{
public:
	int count=0;
	int age;
	char city[20];
	double income;
	int wheels;

void age_driver(int);
void city_driver(char*);
void income_driver(double);
void wheel_car(int);
};

void license::age_driver(int x)
{
	try{
		if(x>=18 && x<=55)
		{
		 cout<<"Age is OK for applying for license \n";
		 count++;
		}
		else
		{
			throw MyException();
		}
	}
	catch(MyException e)
	{
		e.what();
		cout<<"Error: Inappropriate age for applying for license \n";
	}
}

void license::city_driver(char*y)
{
	try{
		if(y=="Pune" ||y=="Mumbai" || y=="Bangalore" || y=="Chennai")
		{
		  cout<<"You are in the RIGHT CITY for applying for license \n";
		  count++;
		}
		else
		{
			throw MyException();
		}
	}
	catch(MyException e)
	{
		e.what();
		cout<<"Error: You are in the WRONG CITY for applying for license \n";
	}
}

void license::income_driver(double z)
{
	try{
		if(z>=50000.00 && z<=100000.00)
		{
			cout<<"You have enough income as per license rules. \n";
			count++;
		}
		else
		{
			throw MyException();
		}
	}
	catch(MyException e)
	{
		e.what();
		cout<<"Error: Your income isn't appropriate as per license rules. \n";
	}
}

void license::wheel_car(int r)
{
	try{
		if(r==4)
		{
			cout<<"You have the Right vehicle. \n";
			count++;
		}
		else {
			throw MyException();
		}
	}
	catch(MyException e)
	{
		e.what();
		cout<<"Error: Inappropriate vehicle. \n";
	}
}

int main()
{
	int a;
	char c[20];
	double inc;
	int w;
	cout<<"Enter your age.\n";
	cin>>a;

	cout<<"Enter your income. \n";
	cin>>inc;

	cout<<"Enter your city. \n";
	cin>>c;

	cout<<"Enter the no. of wheels.\n ";
	cin>>w;

	license l;
	l.age_driver(a);
	l.city_driver(c);
	l.income_driver(inc);
	l.wheel_car(w);

	if(l.count==4)
	{cout<<"\n\n***Overall: you are eligible*** \n";}
	else
	{
		cout<<"\n\n***You are not eligible*** \n";
	}


 return 0;
}
