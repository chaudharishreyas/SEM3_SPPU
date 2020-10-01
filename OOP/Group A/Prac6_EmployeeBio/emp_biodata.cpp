#include<iostream>
#include<iomanip>
#include<cstring>
#define MAX 100
using namespace std;

class Personal_record
{
    public:
    string name,address,gender;
    int age;
        Personal_record()
        {
            cout<<"Calling Personal_record constructor...."<<endl;
            name=address=gender="";
            age=0;
        }

    void inputPersonal_record()
    {
    cout<<"Enter name"<<endl;
    ws(cin);
    getline(cin,name);
    cout<<"Enter gender"<<endl;
    ws(cin);
    getline(cin,gender);
    cout<<"Enter address"<<endl;
    ws(cin);
    getline(cin,address);
    cout<<"Enter age"<<endl;
    cin>>age;

    }
};
class Professional_record:public Personal_record
{
public:
    long experience,salary;
    string company;

        Professional_record()
        {
        cout<<"In Professional_record class constructor..."<<endl;
           company="";
           experience=salary=0;
        }


    void inputProfessional_record()
    {
    cout<<"Enter name of company"<<endl;
    ws(cin);
    getline(cin,company);
    cout<<"Enter years of experience"<<endl;
    cin>>experience;
    cout<<"Enter salary"<<endl;
    cin>>salary;
    }

};
class Academic_record:public Professional_record
{
    float grad_gpa,SSC,HSC;
    public:
    Academic_record()
    {
        cout<<"In Academic_record class constructor..."<<endl;
        grad_gpa=SSC=HSC=0;
    }
    void inputAcademic_record()
    {
    cout<<"Enter graduation CGPA"<<endl;
    cin>>grad_gpa;
    cout<<"Enter 10th percentage"<<endl;
    cin>>SSC;
    cout<<"Enter 12th percentage"<<endl;
    cin>>HSC;

    }
     void displayProfessional_record()
    {
        cout<<"___PERSONAL___RECORD___"<<endl;
        cout<<"Name      : "<<name<<endl;
        cout<<"Gender    : "<<gender<<endl;
        cout<<"Age       : "<<age<<endl;
        cout<<"___PROFESSIONAL_RECORD___"<<endl;
        cout<<"Address   : "<<address<<endl;
        cout<<"Company   : "<<company<<endl;
        cout<<"Experience: "<<experience<<endl;
        cout<<"Salary    : "<<salary<<endl;
    }
    void displayAcademic_record()
    {
        cout<<"___PERSONAL___RECORD___"<<endl;
        cout<<"Name      : "<<name<<endl;
        cout<<"Gender    : "<<gender<<endl;
        cout<<"Age       : "<<age<<endl;
        cout<<"Address   : "<<address<<endl;
        cout<<"___ACADEMIC___RECORD___"<<endl;
        cout<<"Graduation CGPA: "<<grad_gpa<<endl;
        cout<<"10th Percentage: "<<SSC<<endl;
        cout<<"12th Percentage: "<<HSC<<endl;
    }
};

int main()
{

    Academic_record ob;
    ob.inputPersonal_record();
    ob.inputProfessional_record();
    ob.inputAcademic_record();
    ob.displayProfessional_record();
    ob.displayAcademic_record();


}
