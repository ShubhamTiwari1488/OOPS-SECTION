
//STATIC MEMBER FUNCTIONS AND DATA MEMBERS

#include<iostream>
using namespace std;

class Static
{
 static int count;
 
 public:
 
  Static()
  {
   count++;
   cout<<"\nConstructor called ......count value is "<<count<<endl;
  }
  
  static void display()
  {
   cout<<"\nThis is a static members function and the value of count is : "<<count<<endl;
  }
  
  void show()
  { 
   cout<<"\nValue of Count is : "<<count<<endl;
  }
    
};

int Static :: count =0;

int main()
{
 Static s1,s2,s3;
 
 cout<<"\nNon static member functions\n";
 
 s1.show();
 s2.show();
 s3.show();
 
 cout<<"\nStatic member functions\n";
 
 Static :: display();
 
 Static::display();
 
 return 0;
}
 
     
