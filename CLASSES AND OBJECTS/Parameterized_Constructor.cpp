
//PARAMETERIZED CONSTRUCTOR

#include<iostream>
using namespace std;

class Numbers
{
 private:
   int x;
   
 public:
   Numbers(int i)	//Parameterized Constructor
   {
    x=i;
   }
   
   void show_data()
   {
    cout<<"\n x = "<<x<<endl;
   }
   
};

int main()
{
 Numbers N(10);
 
 N.show_data();
 
 return 0;
}

 
