/*Name:shreyas chaudhari
Roll no.:4
class : SE 2,Comp*/
#include<iostream>
using namespace std;
class node
{
	string position;
	int data;
	node *p=NULL, *q=NULL,*r=NULL;
	node *next = NULL;
	node *head1;

public:
		node *crtnode(int x);
		void disp(node *);
		node *addnode(node *);
		node *top(node *);
		node *inter(node *);
		node *bottom(node *);
		node *delnode(node *);
		node *concat(node *,node *);
		node *sep(node *);
};

node * node::crtnode(int x)
{
	int i;
	node * head = NULL;
	for(i=0;i<x-1;i++)
	{
		if(head==NULL)
		{
			head = new node;
			cin.ignore();
			cout<<i+1<<" . ";
			cout<<head->position;
			cin>>head->data;
			head->next=NULL;
			p=head;

		}
		else
		{
			p->next=new node;
			p=p->next;
			cout<<i+1<<" . ";
			cout<<p->position;
			cin>>p->data;
			p->next=NULL;
		}
	}

	p->next=new node;
	p=p->next;
	cout<<i+1<<" . ";
	cout<<p->position;
	cin>>p->data;
	p->next=NULL;
	return head;
}

void node::disp(node *p)
{
	while(p->next!=NULL)
	{
		cout<<p->position<<p->data<<" -> ";
		p=p->next;
	}
	cout<<p->position<<p->data<<"\n";
}
node *node::addnode(node *head)
{
	node *p=head;
	char x;
	int ch;
	do
	{
		cout<<"\nWHERE DO WANT TO ADD A NEW INTEGER \n1.TOP\n2.INTERMEDIATE\n3.BOTTOM\n";
		cin>>ch;
		switch(ch)
		{
		case 1:
			p=top(p);
			break;
		case 2:
			p=inter(p);
			break;
		case 3:
			p=bottom(p);
			break;
		default:cout<<"\nSORRY PLEASE CHECK YOUR CHOICE\n";

		}
		cout<<"\nDO YOU WANT TO ADD ANOTHER INTEGER\n1.YES\t2.NO\n";
		cin>>x;
	}while(x=='y');
	return p;
}
node *node::top(node * p)
{
	node *head;
	head=new node;
	head->position;
	p->position;
	cout<<"ENTER  NEW INTEGER "<<head->position<<" \t";
	cin>>head->data;
	head->next=p;
	return head;
}
node *node::inter(node *p)
{
	node *head=p,*q;
	cout<<"\nENTER INTEGER AFTER WHICH YOU WANT TO ENTER \n";
	int n;
	cin>>n;
	while(p->data!=n)
	{
		p=p->next;
	}
	q=new node;
	q->next=p->next;
	q->position;
	cout<<"\nNOW ENTER THE NEW INTEGER\n";
	cin>>q->data;
	p->next=q;
	return head;
}
node *node::bottom(node *p)
{
	node *q,*head=p;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->position;
	q=new node;
	q->position;
	cout<<"\nENTER THE NEW INTEGER\n";
	cin>>q->data;
	q->next=NULL;
	p->next=q;
	return head;
}

node *node::concat(node *head,node *head2)
{
	node *p;
	for(p=head;p->next!=NULL;p=p->next);
	p->next=head2;
	return head;
}
node *node::delnode(node *head)
{
	node *p=NULL,*q = NULL,*r = NULL, *head1 = NULL;
	while(head->data<0)
	{
		q = head;
		head = q->next;
		if(head1 == NULL)
		{
			head1 = new node;
			head1->data=q->data;
			head1->next=NULL;
			r = head1;
		}
		else
		{
			r->next=new node;
			r=r->next;
			r->data=q->data;
			r->next=NULL;
		}
		delete q;
	}
	p=head;
	while(p->next!=NULL)
	{
		if(p->next->data<0)
		{
			q = p->next;
			p->next = p->next->next;
			if(head1 == NULL)
				{
					head1 = new node;
					head1->data=q->data;
					head1->next=NULL;
					r = head1;
				}
				else
				{
					r->next=new node;
					r=r->next;
					r->data=q->data;
					r->next=NULL;
				}
			delete q;
		}
		else
		{
			p = p->next;
		}
	}
	disp(head1);
	return head;
}
node *node::sep(node *head)
{
	node *p=NULL,*q = NULL,*r = NULL, *head1 = NULL;
		while(head->data<0)
		{
			q = head;
			head = q->next;
			if(head1 == NULL)
			{
				head1 = new node;
				head1->data=q->data;
				head1->next=NULL;
				r = head1;
			}
			else
			{
				r->next=new node;
				r=r->next;
				r->data=q->data;
				r->next=NULL;
			}
			delete q;
		}
		p=head;
		while(p->next!=NULL)
		{
			if(p->next->data<0)
			{
				q = p->next;
				p->next = p->next->next;
				if(head1 == NULL)
					{
						head1 = new node;
						head1->data=q->data;
						head1->next=NULL;
						r = head1;
					}
					else
					{
						r->next=new node;
						r=r->next;
						r->data=q->data;
						r->next=NULL;
					}
				delete q;
			}
			else
			{
				p = p->next;
			}
		}
		while(head1!=NULL)
		{
			cout<<"Negative integer list is: \n";
			disp(head1);
			break;
		}
		cout<<"Positive integer list is: \n";
		return head;
}
int main()
{
	int x,ch;
	char g;
	node se;
	cout<<"\nENTER THE NUMBER OF INTEGER YOU WANT TO ENTER\n";
	cin>>x;
	node *y,*head1,*head2;
	y=se.crtnode(x);
	se.disp(y);
	head1=y;
		do
		{
			cout<<"\nPLEASE SELECT ONE OF THE FOLLOWING OPERATIONS\n";
			cout<<"\n1.ADD A INTEGER\n2.DELETE NEGATIVE INTEGER\n3.CONCATENATE\n4.SEPARATE\n";
			cin>>ch;
			switch(ch)
			{
			case 1:head1=se.addnode(head1);
				   se.disp(head1);
			break;
			case 2:	head1=se.delnode(head1);
			        se.disp(head1);
			break;
			case 3: cout<<"Enter the number of another integers\n";
			cin>>x;
			head2 = se.crtnode(x);
			y = se.concat(head1,head2);
			se.disp(head1);

			break;
			case 4: head1 = se.sep(head1);
					se.disp(head1);
					break;

			default:cout<<"INVALID CHOICE";
			}
			cout<<"\nDO YOU WANT TO CONTINUE Y OR N";
			cin>>g;
		}
		while(g=='y');
		return 0;
}


/*     OUTPUT

ENTER THE NUMBER OF INTEGER YOU WANT TO ENTER
4
1 . -1
2 . -2
3 . 3
4 . 4
-1 -> -2 -> 3 -> 4

PLEASE SELECT ONE OF THE FOLLOWING OPERATIONS

1.ADD A INTEGER
2.DELETE NEGATIVE INTEGER
3.CONCATENATE
4.SEPARATE
1

WHERE DO WANT TO ADD A NEW INTEGERS
1.TOP
2.INTERMEDIATE
3.BOTTOM
1
ENTER  NEW INTEGER  	5

DO YOU WANT TO ADD ANOTHER INTEGER
1.YES	2.NO
n
5 -> -1 -> -2 -> 3 -> 4

DO YOU WANT TO CONTINUE Y OR Ny

PLEASE SELECT ONE OF THE FOLLOWING OPERATIONS

1.ADD A INTEGER
2.DELETE NEGATIVE INTEGER
3.CONCATENATE
4.SEPARATE
2
-1 -> -2
5 -> 3 -> 4

DO YOU WANT TO CONTINUE Y OR Ny

PLEASE SELECT ONE OF THE FOLLOWING OPERATIONS

1.ADD A INTEGER
2.DELETE NEGATIVE INTEGER
3.CONCATENATE
4.SEPARATE
3
Enter the number of another integers
3
1 . 9
2 . 8
3 . 7
5 -> 3 -> 4 -> 9 -> 8 -> 7

DO YOU WANT TO CONTINUE Y OR Ny

PLEASE SELECT ONE OF THE FOLLOWING OPERATIONS

1.ADD A INTEGER
2.DELETE NEGATIVE INTEGER
3.CONCATENATE
4.SEPARATE
4
Positive integer list is:
5 -> 3 -> 4 -> 9 -> 8 -> 7

DO YOU WANT TO CONTINUE Y OR Nn

 */