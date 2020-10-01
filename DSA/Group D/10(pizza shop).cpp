/*
 * NAME: shreyas chaudhari
 * CLASS SE2
 * ROLL NO:4*/
#include<iostream>

#define max 20
using namespace std;
class queue
{
	int r,f;
	int data[max];
public:
	queue()
{
		f=-1;
		r=-1;
}

int isempty()
{
	if(f==-1 && r==-1)
		return 1;
	else
		return 0;
}
int isfull()
{
	if(((r+1)%max)==f)
		return 1;
	else
		return 0;
}
void enqueue(int x,int maximum)
{int i;

	if(isempty())
	{
		r=f=0;
		data[r]=x;
	}
	else
		if(isfull())
	{
		cout<<"The queue is full";
	}
		else
		{
			r=(r+1)%max;
			data[r]=x;
		}

}
void display()
{
	int i;
	cout<<"Placed orders are:";
	for (i=f;i<=r;i++)
		   cout<<data[i]<<endl;
}
};

int main()
{
	queue q;
	int maximum,d,x;
	cout<<"Enter maximum no. of orders that can be placed";
	cin>>maximum;
	cout<<"Place the order";
	for(int i=0;i<maximum;i++)
	{
		cin>>d;
		q.enqueue(d,maximum);
	}
	q.display();
	return 0;
}
/*
 * OUTPUT:
 * Enter maximum no. of orders that can be placed3
Place the order1
2
3
Placed orders are:1
2
3
 * */