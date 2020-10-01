#include<iostream>
#include<iomanip>
#define MAX 100
using namespace std;



class data{
string name,bdgrp,div,cls,dob,dlic,address,dl,confirm;
int tele,roll;

public:

    data(){
       dl=name=bdgrp=div=cls=dob=dlic=address="";
        tele=roll=0;
    }
    void input(){
      l:
    cout<<"Enter roll number of student"<<endl;
    cin>>roll;

    cout<<"Enter name of student"<<endl;
    cin>>name;

    cout<<"Enter blood group of student"<<endl;
    cin>>bdgrp;

    cout<<"Enter class of student"<<endl;
    cin>>cls;

    cout<<"Enter division of student"<<endl;
    cin>>div;

    cout<<"Enter date of birth of student in form of DD/MM/YYYY"<<endl;
    cin>>dob;

    cout<<"Enter telephone number of student"<<endl;
    cin>>tele;

    cout<<"Enter address of student"<<endl;
    cin>>address;

    cout<<"Does the student have driving license. Reply with Y or N"<<endl;
    cin>>dl;
    if(dl=="y"||dl=="Y"){
        cout<<"Enter driving license number"<<endl;
    cin>>dlic;
    }
cout<<"\nDetails of current student"<<endl;
cout<<"Roll no: "<<roll<<"\nName: "<<name<<"\nClass: "<<cls<<"  Div: "<<div<<"\nDOB: "<<dob<<"\nTelephone: "<<tele<<"\nAddress: "<<address<<"\nDriving License no. :";
if(dl=="y"||dl=="Y")
        cout<<dlic<<endl;
        else
            cout<<"Not Available"<<endl;

    cout<<"\nEnter 'Y' to confirm the details and 'N' to edit them"<<endl;
    cin>>confirm;
    if(confirm=="n"||confirm=="N")
        goto l;
    }

    void display(){

    cout<<roll<<"    "<<name<<"       "<<cls<<"     "<<div<<"  "<<dob<<"     "<<bdgrp<<"      "<<tele<<"        "<<address<<"       ";
    if(dl=="y"||dl=="Y")
        cout<<dlic<<endl;
        else
            cout<<"Not Available"<<endl;



    }

    int del(int roll){

    if(this->roll==roll)
    {
    return 1;
    }else
    return 0;

    }

};

int main(){
data *s[MAX];


int ch,i=0;
do{
cout<<"\nPress 1 to add student info"<<endl;
cout<<"Press 2 to display student record"<<endl;
cout<<"Press 3 to delete a student record"<<endl;
cout<<"Press 4 to exit"<<endl;
cin>>ch;
 switch(ch){
 case 1:
     s[i]=new data;
s[i]->input();
i++;
break;
 case 2:
    cout<<"Roll no "<<"Name    "<<"Class  "<<"Div "<<"Date of Birth"<<" Blood Grp "<<"Telephone "<<"Address     "<<"Driving License no."<<endl;
for(int j=0;j<i;j++)
{
    s[j]->display();
}
    break;
 case 3:
    int roll;
    cout<<"Enter the roll number of student whose record you want to delete"<<endl;
    cin>>roll;
    for(int j=0;j<i;j++){
    if(s[j]->del(roll)){
            for(int k=j;k<i;k++){
                s[k]=s[k+1];
        }
        i--;

        break;
        }else
        cout<<"Student not found"<<endl;

    }
    break;
 }



}while(ch!=4);
delete s;
return 0;
}

