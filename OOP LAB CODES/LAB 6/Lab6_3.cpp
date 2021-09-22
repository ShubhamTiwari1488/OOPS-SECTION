
#include<iostream>
using namespace std;

class Add
{
 int x;
 int y;
 
 public:
   
   Add(int x1,int y1)
   {
    x=x1;
    y=y1;
   }
   
   Add(Add &a)
   {
    x=a.x;
    y=a.y;
   }
   
   void Display()
   {
    cout<<"Sum of the numbers is : "<<x+y<<endl;
   }
   
};

int main()
{
 Add a1(34,88);
 
 Add a2=a1;
 
 a2.Display();
 
 return 0;
}
       
