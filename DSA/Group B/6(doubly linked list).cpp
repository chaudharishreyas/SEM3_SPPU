/*
NAME:shreyas chaudhari
CLASS:SE2,comp 
ROLL NO:4
*/
#include<iostream>
using namespace std;
class node
{
public:
	int data;
	node *next,*previous;
	node* create1();
	node* create2();
	void display1(node *);
	void display2(node *);
	void display3(node *);
	node* merge(node *,node *);
};
node* node::create1()
{
	int n,i;
	node *head1,*p,*r;
	head1=NULL;
	cout<<"Enter no of nodes";
	cin>>n;
	for(i=0;i<n;i++)
	{
		if(head1==NULL)
		{
			head1=new node;
			cin>>head1->data;
			head1->next=NULL;
			head1->previous=NULL;
			r=p=head1;
		}
		else
		{
			p->next=new node;
			p=p->next;
			cin>>p->data;
			p->next=NULL;
			p->previous=r;
			r=r->next;
		}
	}
	return head1;
}
node* node::create2()
{
	int z,i;
	node *head2,*q,*s;
	head2=NULL;
	cout<<"Enter no of nodes";
	cin>>z;
	for(i=0;i<z;i++)
	{
		if(head2==NULL)
		{
			head2=new node;
			cin>>head2->data;
			head2->next=NULL;
			head2->previous=NULL;
			s=q=head2;
		}
		else
		{
			q->next=new node;
			q=q->next;
			cin>>q->data;
			q->next=NULL;
			q->previous=s;
			s=s->next;
		}
	}
	return head2;
}
void node::display1(node *head1)
{
	node *p;
	for(p=head1;p!=NULL;p=p->next)
	{
		if(p->next==NULL)
		{
			cout<<p->data<<endl;
		}
		else
		{
			cout<<p->data<<"<->";
		}
	}
}
void node::display2(node *head2)
{
	node *q;
	for(q=head2;q!=NULL;q=q->next)
	{
		if(q->next==NULL)
		{
			cout<<q->data<<endl;
		}
		else
		{
			cout<<q->data<<"<->";
		}
	}
}
//node* node::merge()
node* node::merge(node *head1,node *head2)
{
	//node *head,*head1,*head2,*p;
	node *head,*p;
	if(head1==NULL)
		return head2;
	else if(head2==NULL)
		return head1;
	else
		if(head1->data<head2->data)
		{
			head=p=head1;
			head1=head1->next;
		}
		else
		{
			head=p=head2;
			head2=head2->next;
		}

	while(head1!=NULL && head2!=NULL)
	{
		if(head1->data<head2->data)
		{
			p->next=head1;
			head1=head1->next;
			p=p->next;
		}
		else
		{
			p->next=head2;
			head2=head2->next;
			p=p->next;
		}
	}
	if(head1==NULL)
		p->next=head2;
	else
		p->next=head1;

	return head;
}
void node::display3(node *head)
{
	node *w;
	for(w=head;w!=NULL;w=w->next)
	{
		if(w->next==NULL)
		{
			cout<<w->data<<endl;
		}
		else
		{
			cout<<w->data<<"<->";
		}
	}
}
int main()
{
	node n;
	node *head,*head1,*head2;
	head1=n.create1();
	n.display1(head1);
	head2=n.create2();
	n.display2(head2);
	head=n.merge(head1,head2);
	//n.display1(head);
	n.display3(head);
	return 0;
}




/*OUTPUT
 * Enter no of nodes3
1
2
3
1<->2<->3
Enter no of nodes4
6
7
9
10
6<->7<->9<->10
1<->2<->3<->6<->7<->9<->10
 *
 */
