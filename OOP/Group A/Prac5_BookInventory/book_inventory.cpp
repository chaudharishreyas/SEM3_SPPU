
#include<iostream>
#include<iomanip>
#include<cstring>
#define MAX 100
using namespace std;



class data{
string author,title,publisher;
int price,stock;
 int bill;

public:

    data(){
       author=title=publisher="";
        price=stock=0;
    }
    void input(){
      cout<<"Enter name of author"<<endl;
      ws(cin);
      getline(cin,author);

      cout<<"Enter title of book"<<endl;
      ws(cin);
      getline(cin,title);

      cout<<"Enter publisher"<<endl;
      ws(cin);
      getline(cin,publisher);

      cout<<"Enter price of book"<<endl;
      cin>>price;

      cout<<"Enter stock position"<<endl;
      cin>>stock;



    }

    int del(string title,string author,int stock){

    if((title.compare(this->title)==0)&&(author.compare(this->author)==0))
    {   if(stock)
        this->stock--;
    return 1;
    }else
    return 0;

    }
     int calBill(int bill){
        int n;
    cout<<"Enter how many copies you want"<<endl;
    cin>>n;
    if(n>(this->stock))
        cout<<"Sorry Out of stock!!"<<endl;
    else{
            int bookcost=(this->price)*n;
        cout<<"Price of "<<n<<" books is Rs."<<bookcost<<endl;
        bill=bill+bookcost;
        cout<<"Total bill is Rs."<<bill<<endl;
        this->stock=this->stock-n;
    }
    return bill;
    }


    void display()
    {
    cout<<author<<"    "<<title<<"     "<<publisher<<"          "<<price<<"        "<<stock<<endl;
    }

};

int main(){
data *s[MAX];
data *cart[MAX];
int ch,i=0,k=0,flag=0,bill=0;
string title,author;
login:
cout<<"\n1.Login as shopkeeper"<<endl;
cout<<"2.Login as customer"<<endl;
cin>>ch;
if(ch==1){
do{
cout<<"\nPress 1 to add book info"<<endl;
cout<<"Press 2 to display book record"<<endl;
cout<<"Press 3 to delete a book record"<<endl;
cout<<"Press 4 Go to login"<<endl;
cout<<"Press 5 to exit"<<endl;
cin>>ch;
 switch(ch){
 case 1:
     s[i]=new data;
s[i]->input();
i++;
break;
 case 2:
    cout<<"Author\t"<<"Title\t"<<"Publisher\t"<<"Price\t"<<"Stock"<<endl;
for(int j=0;j<i;j++)
{
    s[j]->display();
}
    break;
 case 3:

    cout<<"Enter the title of book which you want to delete"<<endl;
    ws(cin);
    getline(cin,title);
    cout<<"Enter author of book to be deleted"<<endl;
        ws(cin);
    getline(cin,author);
    for(int j=0;j<i;j++){
    if(s[j]->del(title,author,1)){
            for(int p=j;p<i;p++){
                s[p]=s[p+1];
        }
        i--;
        flag=1;
        break;
        }
    }
    if(flag)
        cout<<"Book deleted from cart"<<endl;
    else
        cout<<"Book not found"<<endl;
    flag=0;
    break;
    case 4:goto login;
break;
 }


}while(ch!=5);
}
else if(ch==2)
{
    do{
cout<<"\nPress 1 to display book record"<<endl;
cout<<"Press 2 to search for a book and add to cart"<<endl;
cout<<"Press 3 to delete a book from cart"<<endl;
cout<<"Press 4 to display cart"<<endl;
cout<<"Press 5 to go to login page"<<endl;
cout<<"6 to exit"<<endl;
cin>>ch;
 switch(ch){

 case 1:
    cout<<"Author\t"<<"Title\t"<<"Publisher\t"<<"Price\t"<<"Stock"<<endl;
for(int j=0;j<i;j++)
{
    s[j]->display();
}
    break;
 case 2:
     cart[k]=new data;

    cout<<"Enter the title of book to be purchased"<<endl;
    ws(cin);
    getline(cin,title);
    cout<<"Enter author of book to be purchased"<<endl;
        ws(cin);
    getline(cin,author);
    for(int j=0;j<i;j++){
    if(s[j]->del(title,author,0)){
            cart[k]=s[j];
        flag=1;
        break;
        }
    }
    if(flag){
            bill=cart[k]->calBill(bill);
        cout<<"Book added to cart"<<endl;
    }else
        cout<<"Book not found"<<endl;
    flag=0;
    k++;
    break;
    case 3:
    cout<<"Enter the title of book which you want to delete from cart"<<endl;
    ws(cin);
    getline(cin,title);
    cout<<"Enter author of book to be deleted from cart"<<endl;
        ws(cin);
    getline(cin,author);
    for(int j=0;j<k;j++){
    if(cart[j]->del(title,author,1)){flag=1;
            for(int p=j;p<k;p++){
                cart[p]=cart[p+1];
        }
        k--;

        break;
        }
    }
    if(flag)
        cout<<"Book deleted from cart"<<endl;
    else
        cout<<"Book not found"<<endl;
    flag=0;
    break;
 case 4:
     cout<<"\n$$$$ Displaying items in cart $$$$\n"<<endl;
    cout<<"Author\t"<<"Title\t"<<"Publisher\t"<<"Price\t"<<"Stock"<<endl;
for(int j=0;j<k;j++)
{
    cart[j]->display();
}
    break;
    case 5: goto login;
    break;
}}while(ch!=6);
}
delete s;
return 0;
}


