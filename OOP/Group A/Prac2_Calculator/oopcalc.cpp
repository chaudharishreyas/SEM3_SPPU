

#include <iostream>
using namespace std;
class Calc
{
private:
	int num1,num2,res,r;
public:
	int getnos(int,int);
	int add();
	int sub();
	int mul();
	int dandr();
};
int Calc::getnos(int a,int b)
{
	num1=a;
	num2=b;
	return 0;
}
int Calc::add()
{
	res=num1+num2;
	cout<<num1<<" + "<<num2<<" ="<<res<<endl;
	return 0;
}
int Calc::sub()
{
	res=num1-num2;
	cout<<num1<<" - "<<num2<<" ="<<res<<endl;
	return 0;
}
int Calc::mul()
{
	res=num1*num2;
	cout<<num1<<" * "<<num2<<" ="<<res<<endl;;
	return 0;
}
int Calc::dandr()
{
	res=num1/num2;
	r=num1%num2;
	cout<<"Quotient= "<<res<<" and remainder= "<<r<<endl;
	return 0;
}
int main()
{
	Calc obj;
	char ch;
	int p=0;
	int n1,n2;
	do
	{
	cout<<"Enter first number, operator, second number"<<endl;
	cin>>n1>>ch>>n2;
	obj.getnos(n1,n2);
	switch(ch)
	{
	case '+':
		obj.add();
		break;
	case '-':
		obj.sub();
		break;
	case '*':
		obj.mul();
		break;
	case '/':
		obj.dandr();
		break;
	default:
		cout<<"Wrong choice"<<endl;
	}
	cout<<"Enter 0 to continue, any other number to stop"<<endl;
	cin>>p;
	}while(p==0);
	cout<<"Thank you!"<<endl;
	return 0;
}



