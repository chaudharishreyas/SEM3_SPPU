/*
  NAME:shreyas chaudhari
  SE-2,COMP
  ROLL NO:4  SUBJECT:DSA
 */


#include<iostream>
#include<string>
using namespace std;

class node
{
   string name;
   int rollno ;
   node *next;
   node *head;
   node *p;

public:

   node()
	{
	   cout<<"Welcome to Pinnacle Club";
	}


node* create();
void display(node *head);
node* ins_start(node *head);
node* ins_betw(node *head);
node* ins_end(node *head);
node* del_start(node *head);
node* del_betw(node *head);
node* del_end(node *head);
node* reverse(node *head);
void count(node *head);
node* concatenate(node *head);

};

node* node::create()
{
	int n,i;
	head=NULL;
	cout<<"Enter number of Students:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		if(head==NULL)
		{
		  head=new node;
          cout<<"\nEnter the name of president:";
          cin>>head->name;
		  cout<<"Enter the roll number:";
		  cin>>head->rollno;
		  head->next=NULL;
		  p=head;
		}
		else
		{
			p->next=new node;
			p=p->next;
			cout<<"\nEnter the name student:";
			cin>>p->name;
			cout<<"Enter the roll number:";
			cin>>p->rollno;
			p->next=NULL;
		}
	}
	return head;
}

void node::display(node *head)
{
  cout<<"The linked list is:"<<endl;
  for(p=head;p!=NULL;p=p->next)
  {
	  //cout<<"Name of member is:";
	  cout<<p->name;
	  //cout<<"Roll number of member is:";
	  cout<<p->rollno<<" ";
  }
}

node* node::ins_start(node *head)
{
  p=new node;
  cout<<"\nEnter the name of new president:";
  cin>>p->name;
  cout<<"Enter roll number :";
  cin>>p->rollno;
  p->next=NULL;
  p->next=head;
  head=p;
  return head;
}

node* node::ins_betw(node *head)
{
	int y;
	node *q;
	p=new node;
	cout<<"\nEnter the name of member:";
	cin>>p->name;
	cout<<"Enter roll number :";
	cin>>p->rollno;
	p->next=NULL;
	cout<<"Enter the roll number of member after which you want to insert node:";
	cin>>y;
	for(q=head;q->rollno!=y&&q!=NULL;q=q->next);
	p->next=q->next;
	q->next=p;
	if(q==NULL)
		{
	      cout<<"Member not found";
		}

	return head;
}

node* node::ins_end(node *head)
{
	node *q;
	p=new node;
	cout<<"\nEnter the name of secretary:";
	cin>>p->name;
	cout<<"Enter roll number :";
    cin>>p->rollno;
	p->next=NULL;
	for(q=head;q->next!=NULL;q=q->next);
	q->next=p;
	return head;
}

node* node::del_start(node *head)
{
	p=head;
	head=head->next;
	delete p;
	return head;
}

node* node::del_betw(node *head)
{
	int y;
	node *q;
	cout<<"Enter the roll number of member you want to delete:";
	cin>>y;
	for(p=head;p->next->rollno!=y;p=p->next);
	q=p->next;
	p->next=q->next;
	delete q;
	return head;
}

node* node::del_end(node *head)
{
	node *q;
	for(p=head;p->next->next!=NULL;p=p->next);
	q=p->next;
	p->next=NULL;
	delete q;
	return head;
}

node* node::reverse(node *head)
{
node *r,*q;
p=NULL;
q=head;
while(q!=NULL)
{
	r=q;
	q=q->next;
	r->next=p;
	p=r;
}
return r;
}

void node::count(node *head)
{
  node *i;
  int j=0;
  for(i=head;i!=NULL;i=i->next)
  {
	  j++;
  }
  cout<<"Number of members are:"<<j;
}

node* node:: concatenate(node *head)
{
	node *head2;
	cout<<"Second linked list:";
	head2=create();
	for(p=head;p->next!=NULL;p=p->next);
	p->next=head2;
	return head;
}

int main()
{
  node a,*head1;
  int ch,x,b,c;
  do
  {
  cout<<"\n1.Create\n2.Insertion\n3.Delete\n4.Reverse\n5.Count\n6.Concatenation\n"<<endl;
  cout<<"Enter your choice:";
  cin>>ch;
  	  switch(ch)
  	  {
  	  	  case 1:
  	  		head1=a.create();
  	  		a.display(head1);
  	  		break;

  	  	  case 2:
  	  		  do
  	  		  {
  	  			  cout<<"\n1.At start 2.In between 3.At end\n";
  	  			  cout<<"\nEnter your choice:";
  	  			  cin>>c;
  	  			  switch(c)
  	  			  {
  	  			  case 1:
  	  				 head1=a.ins_start(head1);
                     cout<<"\nPresident added\n";
  	  				a.display(head1);
  	  				  break;
  	  			  case 2:
  	  				 head1=a.ins_betw(head1);
  	  				 cout<<"\nMember added\n";
  	  				 a.display(head1);
  	  				  break;
  	  			  case 3:
  	  				 head1=a.ins_end(head1);
  	  				 cout<<"\nSecretary added\n";
  	  			     a.display(head1);
  	  				  break;
  	  			  }
  	  			  cout<<"\nDo you want to add more members?\n1.Yes 2.No";
  	  			  cin>>b;
  	  		  }while(b==1);
  	  		  break;

  	  	case 3:
  	  	  	  do
  	  	  	  {
  	  	  	    cout<<"\n1.At start 2.In between 3.At end\n";
  	  	  	  	cout<<"\nEnter your choice:";
  	  	  	  	cin>>c;
  	  	  	  	switch(c)
  	  	  	  	 {
  	  	  	  		case 1:
  	  	  	  		  head1=a.del_start(head1);
  	  	  	  		  cout<<"\nPresident deleted\n";
  	  	  	  	      a.display(head1);
  	  	  	  		  break;
  	  	  	  		case 2:
  	  	  	  		  head1=a.del_betw(head1);
  	  	  	  		  cout<<"\nMember deleted\n";
  	  	  	  	      a.display(head1);
  	  	  	  		  break;
  	  	  	  		case 3:
  	  	  	  		   head1=a.del_end(head1);
  	  	  	  		   cout<<"\nSecretary deleted\n";
  	  	  	  	       a.display(head1);
  	  	  	  		   break;
  	  	  	  	}
  	  	  	  	cout<<"\nDo you want to delete more members?\n1.Yes 2.No";
  	  	  	  	cin>>b;
  	  	  	 }while(b==1);
  	  	  	  break;

  	  	case 4:
  	  		head1=a.reverse(head1);
  	  		cout<<"\nReversed linked list is:\n";
  	  		a.display(head1);
  	  		break;

  	  	case 5:
  	  		a.count(head1);
  	  		break;

  	  	case 6:
  	  		head1=a.concatenate(head1);
  	  		cout<<"Concatenated linked list is:";
  	  		a.display(head1);
  	  		break;

  	  }

  cout<<"\nDo you want to continue?\n1.Yes 2.No";
  cin>>x;
  }while(x==1);

  return 0;
}

/*
 * OUTPUT:
 * Welcome to Pinnacle Club
1.Create
2.Insertion
3.Delete
4.Reverse
5.Count
6.Concatenation

Enter your choice:1
Enter number of Students:2
Welcome to Pinnacle Club
Enter the name of president:qwe
Enter the roll number:11
Welcome to Pinnacle Club
Enter the name student:asd
Enter the roll number:12
The linked list is:
qwe11 asd12
Do you want to continue?
1.Yes 2.No1

1.Create
2.Insertion
3.Delete
4.Reverse
5.Count
6.Concatenation

Enter your choice:2

1.At start 2.In between 3.At end

Enter your choice:1
Welcome to Pinnacle Club
Enter the name of new president:zxc
Enter roll number :13

President added
The linked list is:
zxc13 qwe11 asd12
Do you want to add more members?
1.Yes 2.No1

1.At start 2.In between 3.At end

Enter your choice:2
Welcome to Pinnacle Club
Enter the name of member:rty
Enter roll number :14
Enter the roll number of member after which you want to insert node:13

Member added
The linked list is:
zxc13 rty14 qwe11 asd12
Do you want to add more members?
1.Yes 2.No1

1.At start 2.In between 3.At end

Enter your choice:3
Welcome to Pinnacle Club
Enter the name of secretary:fgh
Enter roll number :15

Secretary added
The linked list is:
zxc13 rty14 qwe11 asd12 fgh15
Do you want to add more members?
1.Yes 2.No2

Do you want to continue?
1.Yes 2.No1

1.Create
2.Insertion
3.Delete
4.Reverse
5.Count
6.Concatenation

Enter your choice:3

1.At start 2.In between 3.At end

Enter your choice:1

President deleted
The linked list is:
rty14 qwe11 asd12 fgh15
Do you want to delete more members?
1.Yes 2.No1

1.At start 2.In between 3.At end

Enter your choice:2
Enter the roll number of member you want to delete:11

Member deleted
The linked list is:
rty14 asd12 fgh15
Do you want to delete more members?
1.Yes 2.No1

1.At start 2.In between 3.At end

Enter your choice:3

Secretary deleted
The linked list is:
rty14 asd12
Do you want to delete more members?
1.Yes 2.No2

Do you want to continue?
1.Yes 2.No1

1.Create
2.Insertion
3.Delete
4.Reverse
5.Count
6.Concatenation

Enter your choice:4

Reversed linked list is:
The linked list is:
asd12 rty14
Do you want to continue?
1.Yes 2.No1

1.Create
2.Insertion
3.Delete
4.Reverse
5.Count
6.Concatenation

Enter your choice:5
Number of members are:2
Do you want to continue?
1.Yes 2.No1

1.Create
2.Insertion
3.Delete
4.Reverse
5.Count
6.Concatenation

Enter your choice:6
Second linked list:Enter number of Students:2
Welcome to Pinnacle Club
Enter the name of president:bnm
Enter the roll number:16
Welcome to Pinnacle Club
Enter the name student:hjk
Enter the roll number:17
Concatenated linked list is:The linked list is:
asd12 rty14 bnm16 hjk17
Do you want to continue?
1.Yes 2.No2
 *
 */