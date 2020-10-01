/*
 * NAME:shreyas chaudhari
 * CLASS SE2
 * ROLL NO:4
 */

#include<iostream>
#include<string.h>
#define max 20
 using namespace std;


 char stack[max];
 int top;


  void init()
  {
      int i;
      for(i=0;i<max;i++)
      stack[i]='\0';
      top=-1;

  }

  int isempty()
  {
   return top ==-1?1:0;

  }

  int isfull()
  {
    return top == max -1 ? 1:0;
  }

   void push(char data)
   {
        top=top+1;
        stack[top]=data;
   }

   char pop()
   {
        char data;
        data=stack[top];
        stack[top]='\0';
        top=top-1;
        return data;
   }


   int main()
   {

   int i,found=0;
   char data[max],ch;
   init();
   cout<<"Enter Expression:";
   cin>>data;
   for(i=0;i<strlen(data);i++)
   {
       if((data[i]=='(') || (data[i]=='[') || (data[i]=='{'))
           push(data[i]);

       else
       {
           switch(data[i])
           {
           case ')':
               if(isempty())
               {
                   cout<<"\nInvlid Expression";
                   found=1;
               }
               ch=pop();
               if(ch=='[' || ch== '}')
               {
                   cout<<"\n Invalid Expression";
                   found=1;
               }
               break;
           case ']':
               if(isempty())
               {
                   cout<<"\nInvlid Expression";
                   found=1;
               }
               ch=pop();
               if(ch=='(' || ch== '{')
               {
                   cout<<"\n Invalid Expression";
                   found=1;
               }
               break;

           case '}':
               if(isempty())
               {
                   cout<<"\nInvlid Expression";
                   found=1;
               }
               ch=pop();
               if(ch=='[' || ch== '(')
               {
                   cout<<"\n Invalid Expression";
                   found=1;
               }
               break;
           }
       }

   }

if(found==0)
{
    if(isempty())
        cout<<"\nValid Expression";
    else
        cout<<"Invalid Expression";;
}
return 0;
   }
   /*output
    * Enter Expression:(A+B+(C*D))

Valid Expression
    */
