#include<stdio.h>
#include <iostream>

using namespace std;


class complex{

public:
	int r,i;
	complex(){
		r=0;
		i=0;

	}


	complex operator + (complex a){
		complex c;

		c.r=r+a.r;
		c.i=i+a.i;
		return c;
	}


	complex operator * (complex a){
			complex c;

			c.r=((r*a.r)-(i*a.i));
			c.i=((i *a.r)+(r*a.i));
			return c;
		}


	friend ostream& operator<<(ostream&a,complex&b){

		a<<b.r<<" + "<<b.i<<"i"<<endl;
        return a;
	}

	friend istream& operator>>(istream&a,complex&b){

		a>>b.r>>b.i;
        return a;
	}

};





int main(){
	complex a,b,c,d;

	cout<<"Initial complex number is 0 + 0i"<<endl;
	cout<<"Enter real and imaginary values of first complex number"<<endl;
	cin>>a;
	cout<<"You have entered : "<<a<<endl;
	cout<<"Enter real and imaginary values of second complex number"<<endl;
	cin>>b;
	cout<<"You have entered : "<<b<<endl;
	c= a + b;
	cout<<"Addition is : "<<c<<endl;
	d=a*b;
	cout<<"Multiplication is : "<<d<<endl;
	return 0;
}

