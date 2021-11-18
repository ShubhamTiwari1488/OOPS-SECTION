
#include<iostream>
using namespace std;

class Father
{
 int age;
 char name[50];
 char garbage;
 
 public:
 
 void f_input()
 {
  cout<<"\nEnter the age"<<endl;
  cin>>age;
  
  cout<<"\nEnter the name "<<endl;
  cin.get(garbage);
  cin.getline(name,50);
  
 }
 
 void f_display()
 {
  cout<<"\nThe age is "<<age<<endl;
  cout<<"\nThe name is "<<name<<endl;
 }  
 
};

class Son:public Father
{
 int age;
 char name[50];
 char garbage;
 
 public:
 
 void s_input()
 {
  cout<<"\nEnter the age "<<endl;
  cin>>age;
  
  cout<<"\nEnter the name "<<endl;
  cin.get(garbage);
  cin.getline(name,50);
 }
 
 void s_display()
 {
  cout<<"\nAge is "<<age<<endl;
  cout<<"\nName is "<<name<<endl;
 }
};

class Grandson:public Son
{
  int age;
 char name[50];
 char garbage;
 
 public:
 
 void g_input()
 {
  cout<<"\nEnter the age "<<endl;
  cin>>age;
  
  cout<<"\nEnter the name "<<endl;
  cin.get(garbage);
  cin.getline(name,50);
 }
 
 void g_display()
 {
  cout<<"\nAge is "<<age<<endl;
  cout<<"\nName is "<<name<<endl;
 }
}; 

int main()
{
 class Grandson g;
 
 g.f_input();
 g.f_display();
 
 g.s_input();
 g.s_display();
 
 g.g_input();
 g.g_display();
 
 return 0;
}
    
