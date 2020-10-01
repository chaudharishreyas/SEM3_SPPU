/*
  NAME:shreyas chaudhari	
  SE-2,COMP
  ROLL NO:4
  SUBJECT:DSA
 */

#include<iostream>
using namespace std;

class set
{
int uni[50],cri[20],badm[20],un[50],intse[50],ocri[50],obadm[50],nocnb[50];
int n,n1,n2,i,j,k,x,l;

public:
/*
set()
{


}
*/
void accept();
void display();
void uniion();
void intersec();
void onlycri();
void onlybadm();
void nocribadm();

};

void set::accept()
{
	cout<<"Enter the number of students in class:";
	cin>>n;
	cout<<"Enter the roll numbers of students in class:";
	for(i=0;i<n;i++)
	{
		cin>>uni[i];
	}

	cout<<"Enter the number of students who play cricket:";
	cin>>n1;
	cout<<"Enter the roll numbers of students who play cricket :";
	for(i=0;i<n1;i++)
	{
		cin>>cri[i];
	}

	cout<<"Enter the number of students who play badminton:";
	cin>>n2;
	cout<<"Enter the roll numbers of students who play badminton:";
	for(i=0;i<n2;i++)
	{
		cin>>badm[i];
	}
}

void set::display()
{
	cout<<"\nStudents in class are:\n";
	for(i=0;i<n;i++)
	{
		cout<<uni[i]<<" ";
	}

	cout<<"\nStudents who play cricket are:\n";
	for(i=0;i<n1;i++)
	{
		cout<<cri[i]<<" ";
	}

	cout<<"\nStudents who play badminton are:\n";
	for(i=0;i<n2;i++)
	{
		cout<<badm[i]<<" ";
	}

}
void set::uniion()
{

	k=0;
	for(i=0;i<n1;i++)
	{
		un[k]=cri[i];
		k++;
	}

	for(i=0;i<n2;i++)
	{
		un[k]=badm[i];
		k++;
	}

	int temp=0;
	for(i=0;i<k;i++)
	{
		for(j=i;j<k;j++)
		{
			if(un[i]>un[j])
			{
				temp=un[i];
				un[i]=un[j];
				un[j]=temp;
			}
		}
	}

	cout<<"\nStudents who play either cricket or badminton are:\n";
	for(i=0;i<k;i++)
	{
		if(un[i]==un[i+1])
		{

		}

		else
		{
			cout<<un[i]<<" ";
		}
	}

}

void set::intersec()
{
	x=0;

	for(i=0;i<n2;i++)
	{
		l=0;
		for(int j=0;j<n1;j++)
		{
			if(badm[i]==cri[j])
			{
				l++;
			}
		}

		if(l>=1)
		{
			intse[x]=badm[i];
			x++;
		}

	}

	cout<<"\nStudents who play both cricket and badminton are:\n";
	for(int i=0;i<x;i++)
	{
		cout<<intse[i]<<" ";
	}
}

void set::onlycri()
{
	int y=0;

	for(i=0;i<n1;i++)
	{
		l=0;
		for(j=0;j<x;j++)
		{
			if(cri[i]==intse[j])
			{
				l++;
			}
		}

		if(l==0)
		{
			ocri[y]=cri[i];
			y++;
		}
	}

	cout<<"\nStudents who play only cricket are:\n";
	for(i=0;i<y;i++)
	{
		cout<<ocri[i]<<" ";
	}

}

void set::onlybadm()
{
	int a=0;
	for(i=0;i<n2;i++)
	{
		l=0;
		for(j=0;j<x;j++)
		{
			if(badm[i]==intse[j])
			{
				l++;
			}
		}

		if(l==0)
		{
			obadm[a]=badm[i];
			a++;
		}
	}

	cout<<"\nStudents who play only badminton are:\n";
	for(i=0;i<a;i++)
	{
		cout<<obadm[i]<<" ";
	}
}

void set::nocribadm()
{

	int b=0;

		for(i=0;i<n;i++)
		{
			l=0;
			for(j=0;j<k;j++)
			{
				if(uni[i]==un[j])
				{
					l++;
				}
			}

			if(l==0)
			{
				nocnb[b]=uni[i];
				b++;
			}
		}
		cout<<"\nStudents who play neither cricket nor badminton are:\n";
		for(i=0;i<b;i++)
		{
			cout<<nocnb[i]<<" ";
		}
}

int main()
{

	set s;
	int ch,f;
	do
	{
		cout<<"1.ACCEPT\n2.DISPLAY\n3.SUTDENTS WHO PLAY EITHER CRICKET OR BADMINTION\n4.STUDENTS WHO PLAY BOTH CRICKET AND BADMINTION\n"
		"5.STUDENTS WHO PLAY ONLY CRICKET\n6.STUDENTS WHO PLAY ONLY BADMINTION\n7.STUDENTS WHO PLAY NEITHER CRICKET NOR BADMINTION\n\n";

		cout<<"Enter your choice:";
		cin>>ch;

		switch(ch)
		{
		case 1:s.accept();
		break;

		case 2:s.display();
		break;

		case 3:s.uniion();
		break;

		case 4:s.intersec();
		break;

		case 5:s.onlycri();
		break;

		case 6:s.onlybadm();
		break;

		case 7:s.nocribadm();
		break;

		default:
		cout<<"Invalid choice";
		}
	cout<<"\nDo you want to continue?1.Yes 2.No";
	cin>>f;
	}while(f==1);

	return 0;

}
/*
 * OUTPUT:
 * 1.ACCEPT
2.DISPLAY
3.SUTDENTS WHO PLAY EITHER CRICKET OR BADMINTION
4.STUDENTS WHO PLAY BOTH CRICKET AND BADMINTION
5.STUDENTS WHO PLAY ONLY CRICKET
6.STUDENTS WHO PLAY ONLY BADMINTION
7.STUDENTS WHO PLAY NEITHER CRICKET NOR BADMINTION

Enter your choice:1
Enter the number of students in class:5
Enter the roll numbers of students in class:1
2
3
4
5
Enter the number of students who play cricket:3
Enter the roll numbers of students who play cricket :1
2

3

Enter the number of students who play badminton:3
Enter the roll numbers of students who play badminton:3

4
5

Do you want to continue?1.Yes 2.No1
1.ACCEPT
2.DISPLAY
3.SUTDENTS WHO PLAY EITHER CRICKET OR BADMINTION
4.STUDENTS WHO PLAY BOTH CRICKET AND BADMINTION
5.STUDENTS WHO PLAY ONLY CRICKET
6.STUDENTS WHO PLAY ONLY BADMINTION
7.STUDENTS WHO PLAY NEITHER CRICKET NOR BADMINTION

Enter your choice:2

Students in class are:
1 2 3 4 5
Students who play cricket are:
1 2 3
Students who play badminton are:
3 4 5
Do you want to continue?1.Yes 2.No1
1.ACCEPT
2.DISPLAY
3.SUTDENTS WHO PLAY EITHER CRICKET OR BADMINTION
4.STUDENTS WHO PLAY BOTH CRICKET AND BADMINTION
5.STUDENTS WHO PLAY ONLY CRICKET
6.STUDENTS WHO PLAY ONLY BADMINTION
7.STUDENTS WHO PLAY NEITHER CRICKET NOR BADMINTION

Enter your choice:3

Students who play either cricket or badminton are:
1 2 3 4 5
Do you want to continue?1.Yes 2.No1
1.ACCEPT
2.DISPLAY
3.SUTDENTS WHO PLAY EITHER CRICKET OR BADMINTION
4.STUDENTS WHO PLAY BOTH CRICKET AND BADMINTION
5.STUDENTS WHO PLAY ONLY CRICKET
6.STUDENTS WHO PLAY ONLY BADMINTION
7.STUDENTS WHO PLAY NEITHER CRICKET NOR BADMINTION

Enter your choice:4

Students who play both cricket and badminton are:
3
Do you want to continue?1.Yes 2.No1
1.ACCEPT
2.DISPLAY
3.SUTDENTS WHO PLAY EITHER CRICKET OR BADMINTION
4.STUDENTS WHO PLAY BOTH CRICKET AND BADMINTION
5.STUDENTS WHO PLAY ONLY CRICKET
6.STUDENTS WHO PLAY ONLY BADMINTION
7.STUDENTS WHO PLAY NEITHER CRICKET NOR BADMINTION

Enter your choice:5

Students who play only cricket are:
1 2
Do you want to continue?1.Yes 2.No1
1.ACCEPT
2.DISPLAY
3.SUTDENTS WHO PLAY EITHER CRICKET OR BADMINTION
4.STUDENTS WHO PLAY BOTH CRICKET AND BADMINTION
5.STUDENTS WHO PLAY ONLY CRICKET
6.STUDENTS WHO PLAY ONLY BADMINTION
7.STUDENTS WHO PLAY NEITHER CRICKET NOR BADMINTION

Enter your choice:6

Students who play only badminton are:
4 5
Do you want to continue?1.Yes 2.No1
1.ACCEPT
2.DISPLAY
3.SUTDENTS WHO PLAY EITHER CRICKET OR BADMINTION
4.STUDENTS WHO PLAY BOTH CRICKET AND BADMINTION
5.STUDENTS WHO PLAY ONLY CRICKET
6.STUDENTS WHO PLAY ONLY BADMINTION
7.STUDENTS WHO PLAY NEITHER CRICKET NOR BADMINTION

Enter your choice:7

Students who play neither cricket nor badminton are:

Do you want to continue?1.Yes 2.No2
 *
 */







