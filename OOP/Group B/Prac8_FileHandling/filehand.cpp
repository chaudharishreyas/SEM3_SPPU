#include<iostream>
#include<fstream>
using namespace std;

int main()
{
ofstream file;
file.open("data.txt");
cout<<"File opened"<<endl;
file<<"This is text file"<<endl;
cout<<"File write"<<endl;
cout<<"Reading file"<<endl;
string str;
ifstream fin;
fin.open("data.txt");
while(fin)
{
getline(fin,str);
cout<<str;

}

fin.close();

return 0;

}
