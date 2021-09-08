
#include<iostream>
using namespace std;

class Father
{
 public:
 
 char name1[50];
 int age1;
 
 void getdata()
 {
  cout<<"\nEnter name ";
  cin>>name1;
  
  cout<<"\nAge ";
  cin>>age1;
  
 }
 
};

class Son : public Father
{
 public :
 
 char name2[50];
 int age2;
 
 void Input()
 {
  cout<<"\nEnter son name ";
  cin>>name2;
  
  cout<<"\nAge ";
  cin>>age2;
 }
 
 void display()
 {
  if(age2>=age1)
    cout<<"\nError "<<endl;
    
  else
  {
   cout<<"\nFather name : "<<name1<<endl;
   cout<<"Father age : "<<age1<<endl;
   
   cout<<"\nSon name : "<<name2<<endl;
   cout<<"Son age : "<<age2<<endl;
  }    
  }
}; 

int main()
{
 Son s;
 
 s.getdata();
 s.Input();
 
 s.display();
 
 return 0;
}
  
