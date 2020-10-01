/*
NAME: shreyas chaudhari
CLASS: SE2 
ROLL NO: 4
TITLE: STRING OPERATIONS
*/

#include<iostream>
using namespace std;
class strop
{
private: char a[30], s[10],b[10];
		int i=0,l2=0;
public:	void getst();
		int len();
		void copy();
		void con();
		void equal();
		void getst2();
		void rev();
		void subs();

};
	void strop::getst()
	{
		{
					cout<<"enter the string"<<endl;
					cin>>a;
				}
	}
	int strop::len()
		{
				while(a[i]!='\0')
					{
						i++;
					}
				return i;
		}
	void strop::copy()
	{
		int j=0;
		while(a[j]!='\0')
			{
			s[j]=a[j];
			j++;
			}
		cout<<"The copied string is "<<s;
	}
	void strop::getst2()
	{
		cout<<"Enter string 2"<<endl;
		cin>>s;
		while(s[l2]!='\0')
			{
				 l2++;
			}

	}

	void strop::con()
	{
		int j=0;
			while(a[j]!='\0')
			{
				b[j]=a[j];
				j++;
			}
		getst2();
		len();
		int q=i,k=0;
		while(s[k]!='\0')
		{
			b[q]=s[k];
			q++;
			k++;
		}
		cout<<"\nThe concatenated string is "<<b;
	}
	void strop::equal()
	{
		int j=0, f=0;
		len();
		getst2();
		if(i!=l2)
		{
			cout<<"The two strings are not equal"<<endl;
		}
		else
		{
			if(a[j]!=s[j])
			{	f=0;
				if(a[j]>s[j])
				{
					cout<<"String 1 is greater than string 2"<<endl;
				}
					else
					{
						cout<<"String 2 is greater than string 1"<<endl;
					}
			}
				else
				{
					f=1;
				   j++;
				}
			}
		if (f==1)
		cout<<"The two strings are equal"<<endl;
	}
	void strop::rev()
	{

		char temp;
		int q;
		len();
		for (q=0;q<=(i/2);q++)
		{
			temp=a[q];
			a[q]=a[i-1];
			a[i-1]=temp;
			i--;
		}
		cout<<"The reversed string is "<<a;
	}
	void strop::subs()
	{
		getst2();
		int q=0,f=0,k=0,n=0;
		char s3[10];
		while(a[q]!='\0'&& s[k]!='\0')
		{
			if(a[q]== s[k] || a[q+1]==s[k])
			{
				s3[n]=s[k];
				f=1;
				q++;
				k++;
				n++;
			}
			else
			{
				f=0;
				k=0;
				q++;
			}
		}
		if(f==1)
			cout<<"The substring is present"<<s3<<endl;
		else
			cout<<"The substring is absent"<<endl;
	}
	int main()
{
	strop a;
	int ch,n;
	char g;
	a.getst();
	do
	{
	cout<<"1. Finding the length of the string. \n2.Copying one string in to another. \n3.Concatenation of two strings. \n4. To find if the strings are equal. \n5.Reverse of a string.\n6. Find the substring in the main string\n.";
	cout<<"enter your choice"<<endl;
	cin>>ch;
	switch(ch)
	{
	case 1:
		n=a.len();
		cout<<"The length of the string is "<<n;

	break;
	case 2: a.copy();
	break;
	case 3: a.con();
	break;
	case 4: a.equal();
	break;
	case 5: a.rev();
			break;
	case 6: a.subs();
	break;
	default:cout<<"Invalid choice";
	}
	cout<<"\n Do you want to continue? y or n?"<<endl;
	cin>>g;
	}while(g=='y');
}
/*OUTPUT
 * enter the string
hi
1. Finding the length of the string.
2.Copying one string in to another.
3.Concatenation of two strings.
4. To find if the strings are equal.
5.Reverse of a string.
6. Find the substring in the main string
.enter your choice
1
The length of the string is 2
 Do you want to continue? y or n?
y
1. Finding the length of the string.
2.Copying one string in to another.
3.Concatenation of two strings.
4. To find if the strings are equal.
5.Reverse of a string.
6. Find the substring in the main string
.enter your choice
2
The copied string is hi
 Do you want to continue? y or n?
y
1. Finding the length of the string.
2.Copying one string in to another.
3.Concatenation of two strings.
4. To find if the strings are equal.
5.Reverse of a string.
6. Find the substring in the main string
.enter your choice
3
Enter string 2
world

The concatenated string is hiworld
 Do you want to continue? y or n?
y
1. Finding the length of the string.
2.Copying one string in to another.
3.Concatenation of two strings.
4. To find if the strings are equal.
5.Reverse of a string.
6. Find the substring in the main string
.enter your choice
4
Enter string 2
world
The two strings are not equal

 Do you want to continue? y or n?
y
1. Finding the length of the string.
2.Copying one string in to another.
3.Concatenation of two strings.
4. To find if the strings are equal.
5.Reverse of a string.
6. Find the substring in the main string
.enter your choice
5
The reversed string is ih
 Do you want to continue? y or n?
y
1. Finding the length of the string.
2.Copying one string in to another.
3.Concatenation of two strings.
4. To find if the strings are equal.
5.Reverse of a string.
6. Find the substring in the main string
.enter your choice
6
Enter string 2
world
The substring is absent

 Do you want to continue? y or n?
n
 *
 */
