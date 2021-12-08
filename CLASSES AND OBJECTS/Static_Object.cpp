
//DEMONSTRATING STATIC OBJECT

#include<iostream>
using namespace std;

class Static
{
 int a;
 int b;
 
 public:
  
  void show_data()
  {
   cout<<"\na = "<<a<<" and b = "<<b;
  }
  
  void add()
  {
   a+=10;
   b+=20;
  }
  
};

int main()
{
 static Static s;      // Creating a static object
 
 s.show_data();     // When an object of a class is declared static , all its members are automatically 
                    // initialized to zero
 s.add();
 
 s.show_data();
 
 cout<<endl;
 
 return 0;   
}
 
