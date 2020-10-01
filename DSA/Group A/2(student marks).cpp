/* NAME: shreyas chaudhari
 * ROLL NUMBER: 4*SE-2,Comp * WRITE A PROGRAM TO STORE MARKS SCORED FOR TEST OF SUBJECT DSA
 * FOR 'n' STUDENTS. COMPUTE
 * 1.AVERAGE SCORE OF THE CLASS
 * 2.HIGHEST AND LOWEST SCORE OF THE CLASS
 * 3.MARKS SCORED BY MOST OF THE STUDENTS
 * 4.LIST OF STUDENTS WHO WERE ABSENT FOR THE TEST.
 */

#include <iostream>
using namespace std;
void avg(float a[10],int n)// COMPUTES THE AVERAGE OF THE STUDENT
{
	int i,s=0,c=0;
	float av;
	for(i=0;i<n;i++)
	{
		if(a[i]==-1)
				{
					continue;
				}
		else
		{
			s=s+a[i];
			c++;
		}
	}
	av=s/c;
	cout<<"The average="<<av;
}
void hl(float a[10],int n)//COMPUTES THE HIGHEST AND THE LOWEST SCORE OF THE CLASS
{
	int max=a[0],i,min;
	for(i=0;i<n;i++)
	{
		if(a[i]!=-1)
		{
			min=a[i];
			break;
		}
	}
	for(i=1;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	for(i=1;i<n;i++)
	{
		if(a[i]!=-1)
		{
			if(min>a[i])
			{
				min=a[i];
			}
		}
	}
	cout<<"The maximum score is "<<max<<"\n The minimum score is "<<min<<endl;
}
void marks_most(float a[10],int n)//COMPUTE THE MARKS SCORED BY MOST OF THE STUDENTS
{
	int  tempc, count=1, repsc,i,j;
	for(i=0;i<n;i++)
	{
		if(a[i]==-1)
		{
			continue;
		}
		else
		{
			tempc=0;

			tempc++;
			for(j=i+1;j<n;j++)
			{
				if(a[j]==a[i])
				{
					tempc++;
					if(tempc>count)
					{
						repsc=a[i];
						count=tempc;
					}
				}
			}
		}
	}
	cout<<"Repeating score is "<<repsc;
}
void absent(float a[10],int n)//LIST OF ABSENT STUDENTS
{
	int i;
	cout<<"The roll numbers of the absent student is"<<endl;
	for(i=0;i<n;i++)
	{
		if(a[i]==-1)
		{
			cout<<(i+1)<<"   ";
		}
	}
}
int main()
{
	int N,i,ch;
	char g;
	cout<<"Enter the limit"<<endl;
	cin>>N;

	float ar[N];
	cout<<"Enter the marks in DSA \n If the student is absent, please enter marks as '-1'"<<endl;
		for(i=0;i<N;i++)
		{
			cin>>ar[i];
		}
	do
	{
	cout<<"1.Find the Average \n 2.Find the highest and the lowest marks score \n 3. Marks scored by most of the students \n 4. List of students who were absent for the test. \n Enter your choice"<<endl;
		cin>>ch;



	switch(ch)
	{
		case 1:avg(ar,N);
		break;
		case 2: hl(ar,N);
		break;
		case 3: marks_most(ar,N);
		break;
		case 4:
				absent(ar,N);
			break;

default:cout<<"invalid choice";

	}
	cout<<"\n Do you want to continue? (y) or (n)"<<endl;
		cin>>g;
	}while(g=='y');
}
/*OUPUT
Enter the limit
3
Enter the marks in DSA 
 If the student is absent, please enter marks as '-1'
45
85
-1
1.Find the Average 
 2.Find the highest and the lowest marks score 
 3. Marks scored by most of the students 
 4. List of students who were absent for the test. 
 Enter your choice
1
The average=65
 Do you want to continue? (y) or (n)
y
1.Find the Average 
 2.Find the highest and the lowest marks score 
 3. Marks scored by most of the students 
 4. List of students who were absent for the test. 
 Enter your choice
2
The maximum score is 85
 The minimum score is 45

 Do you want to continue? (y) or (n)
y
1.Find the Average 
 2.Find the highest and the lowest marks score 
 3. Marks scored by most of the students 
 4. List of students who were absent for the test. 
 Enter your choice
3
Repeating score is 0
 Do you want to continue? (y) or (n)
y
1.Find the Average 
 2.Find the highest and the lowest marks score 
 3. Marks scored by most of the students 
 4. List of students who were absent for the test. 
 Enter your choice
4
The roll numbers of the absent student is
3   
 Do you want to continue? (y) or (n)
n
*/
