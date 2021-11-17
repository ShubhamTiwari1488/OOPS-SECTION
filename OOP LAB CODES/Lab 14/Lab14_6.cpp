
#include<iostream>
using namespace std;

class emp
{
 char ename[30];
 int esal;
 
 public:
 
 void input()
 {
  cout<<"\nEnter ename and esal ";
  cin>>ename>>esal;
  
 }
 
 void cal()
 {
  if(esal<=0)
   throw esal;
   
  else
  {
   cout<<"\nTA is "<<0.09*esal<<endl;
   cout<<"\nHRA is "<<0.15*esal<<endl;
  }
 }
 
};

int main()
{
 emp e;
 
 e.input();
 
 try
 {
  e.cal();
 }
 
 catch(int i)
 {
  cout<<"\nSalary is negative\n";
 }
 
 return 0;
}
         
