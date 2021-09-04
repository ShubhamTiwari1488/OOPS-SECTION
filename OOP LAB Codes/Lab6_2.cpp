
#include<iostream>
#include<cstring>
using namespace std;

class Name
{
 char *first;
 char *second;
 char *full;
 
 public:
  
  Name()
  {
   first=new char[20];
   second=new char[20];
   full=new char[40];
  }
  
  void Input()
  {
   cout<<"Enter first name "<<endl;
   cin>>first;
   
   cout<<"Enter last name "<<endl;
   cin>>second;
   
  }
  
  void Display()
  {
   strcpy(full,first);
   strcat(full,second);
   
   cout<<"\nThe full name is : "<<full<<endl;
  }
};

int main()
{
 Name n;
 
 n.Input();
 n.Display();
 
 return 0;
}
      
