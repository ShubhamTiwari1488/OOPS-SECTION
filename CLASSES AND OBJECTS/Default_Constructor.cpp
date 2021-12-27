
//DEFAULT CONSTRUCTOR

#include<iostream>
using namespace std;

class Numbers
{
 private:
 
   int x;
   
 public:
   
   Numbers()
   {
    x=0;
   }
   
   void show_data()
   {
    cout<<"\n x = "<<x;
   }
   
};

int main()
{
 Numbers N;  //Default Constructor is called
 
 N.show_data();
 
 return 0;
}
   
