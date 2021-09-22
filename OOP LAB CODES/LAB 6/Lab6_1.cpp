
#include<iostream>
#include<cstring>
using namespace std;

class student
{

 char name[50];
 int roll;
 float marks;
 
 public:
 
 student()
 {
   strcpy(name,"Shubham");
   
   roll=1488;
   
   marks=88.5;
 }

 void Input();
 void Display();
};

void student::Input()
{
 cout<<"\nEnter the name ";
 cin>>name;
 cout<<"\nEnter roll no ";
 cin>>roll;
 cout<<"\nEnter marks ";
 cin>>marks;
}

void student::Display()
{
 cout<<"\nName = "<<name<<endl;
 cout<<"Roll = "<<roll<<endl;
 cout<<"Marks = "<<marks<<endl;
}

int main()
{
 student s;
 
 cout<<"\nDefault constructor "<<endl;
 s.Display();
 
 return 0;
}
 
 
       
