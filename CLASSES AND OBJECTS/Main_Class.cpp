
//DECLARING A CLASS WITH THE NAME 'main'

#include<iostream>
using namespace std;

class main
{
 private:
  int x;
  
 public:
  main()
  {
   x=20;
   
   cout<<"\nThe value of x is "<<x<<endl;
   
  }
  
 ~main()
 {
  cout<<"Destroyed"<<endl;
 }
};

int main()
{
 class main M;    //using the keyword class before main 
 
 return 0;
}
  
