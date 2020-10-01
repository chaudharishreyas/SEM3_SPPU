/*
 * pub.cpp
 *
 *  Created on: 19-Aug-2019
 *      Author: admin1
 */


#include<iostream>


using namespace std;




class publication{

public:
	float price;
	char title[50];
	void input(){
		cout<<"Enter title of Publication"<<endl;
		cin>>title;
		cout<<"Enter price"<<endl;
		cin>>price;
	}
	    
	    int isException(int i)
{
	try{
		if(i==0)
		throw i;
	}
	catch(int i)
		{
			cout<<"Exception occured"<<endl;
			
			return 1;
			}
			return 0;
}
	
	void display(){
		if(isException(price)){
       	
			cout<<"Book is for free"<<endl;
			}
		cout<<"Information of book\n";
		cout<<"Title"<<title<<"\nPrice"<<price<<endl;
	}


};
class book:public publication{
int pgcount;
public:
void input(){
	cout<<"Enter page count"<<endl;
	cin>>pgcount;
}
void display(publication p){
	if(isException(pgcount))
			cout<<"Book doesn't exist"<<endl;
			
		cout<<"Information of book\n";
		cout<<"Title"<<p.title<<"\nPrice"<<p.price<<"\nPage count"<<pgcount<<endl;
	}
};
class tape:public publication{
float min;
public:
void input(){
cout<<"Enter playing time in minutes"<<endl;
		cin>>min;

	}

void display(publication p){
	if(isException(min))
       	cout<<"Tape doesn't exist"<<endl;
			
		cout<<"Information of book\n";
		cout<<"Title"<<p.title<<"\nPrice"<<p.price<<"\nPlaying time"<<min<<endl;
	}
};

int main(){
	publication p;
	book b;
	tape t;
	p.input();

	b.input();

	t.input();
	
	p.display();
	
	b.display(p);
	
	t.display(p);
	return 0;
}
