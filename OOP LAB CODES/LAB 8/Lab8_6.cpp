
#include<iostream>
using namespace std;

class student
{
 char name[20];
 int roll;
 
 public:
 
 void get()
 {
  cout<<"\nEnter the name of the student ";
  cin>>name;
  
  cout<<"\nEnter the roll ";
  cin>>roll;
  
 }
 
 void display()
 {
  cout<<"\nName of the student is "<<name<<endl;
  cout<<"Roll number of the student is "<<roll<<endl;
 }
 
};

class Academic:public student
{ 
 int amark1;
 int amark2;
 
 public:
 
 void getA()
 {
  cout<<"\nEnter the marks of the academic ";
  cin>>amark1>>amark2;
  
 }
 
 int sum()
 {
  return(amark1+amark2);
 }
  
};  

class Sports:public student
{
 int smark1;
 int smark2;
 
 public:
 
 void getS()
 {
  cout<<"\nEnter the mark of the academic ";
  cin>>smark1>>smark2;
 }
 
 int sum()
 {
  return(smark1+smark2);
 }
};

int main()
{
 int total;
 
 Academic a;
 Sports s;
 
 a.get();
 a.getA();
 s.getS();
 
 total=a.sum();
 
 total+=s.sum();
 
 cout<<"\nDisplaying the details=============\n";
 
 a.display();
 cout<<"Total marks of the student is : "<<total<<endl;
 
 return 0;
}
      
