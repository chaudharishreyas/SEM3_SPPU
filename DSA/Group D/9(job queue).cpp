/*Name:shreyas chaudhari
Roll no.:4
class : SE 2*/
#include<iostream>
using namespace std;

class queue
{
   int data[20];
   int f,r;

public:
    queue()
{
    	f=-1;
    	r=-1;
}

int isempty()
{
	if(f==-1)
	    return 1;
	else
		return 0;
}
int isfull()
{
	if(r>=20)
	    return 1;
	else
		return 0;
}

void enqueue(int x)
{
     if(isfull())
     {
    	 cout<<"job queue is full";
     }
     else
     {
    	 if(f==-1)
           f++;
    	   r++;
    	 data[r]=x;

      }
}

void dequeue()
{
   int x;
	if(isempty())
      cout<<"job queue is empty";
	else
	{
        x=data[f];
        f++;
        cout<<x<<" Job deleted !\n";

	}
}
void disp()
{
	cout<<"job queue is as :";
	for(int i=f;i<=r;i++)
	{
		cout<<data[i]<<" ";
	}
}

};

int main()
{
   int ch,n,x,d;
   queue q;
   cout<<"enter no of jobs in queue ";
   cin>>n;
   cout<<"enter jobs ";
   for(int i=0;i<n;i++)
   {
	   cin>>d;
	   q.enqueue(d);
   }
do{
   cout<<"MENU\n1)ADD JOB\n2)DELETE JOB\n 3)DISPLAY \nEnter your choice:";
   cin>>ch;


   switch(ch)
   {
   case 1:cout<<"enter job to be added ";
           cin>>d;
	      q.enqueue(d);
	      cout<<"JOB ADDED\n";
	      q.disp();
	      break;

   case 2:q.dequeue();
          q.disp();
           break;

   case 3:q.disp();
           break;
   default:cout<<"INVALID CASE";

   }
   cout<<"\n do you wants to continue?(1.yes/2.no)";
   cin>>x;
}while(x==1);
}


/*  OUTPUT
 enter no of jobs in queue 5
enter jobs 1 2 3 4 5
MENU
1)ADD JOB
2)DELETE JOB

Enter your choice:1
enter job to be added 6
JOB ADDED
job queue is as :1 2 3 4 5 6
 do you wants to continue?(1.yes/2.no)1
MENU
1)ADD JOB
2)DELETE JOB

Enter your choice:2
1 Job deleted !
job queue is as :2 3 4 5 6
 do you wants to continue?(1.yes/2.no)2
 */