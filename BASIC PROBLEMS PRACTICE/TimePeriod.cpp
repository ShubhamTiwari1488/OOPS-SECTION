
/*_____________________FINDING TIME PERIOD OF DIFFERENT LENGTH PENDULUM___________________________*/

#include<iostream>
#include<cmath>

using namespace std;

#define PI 3.142
#define G 9.8

int main()
{
 
 int length;
 double timePeriod,ratio,root;
 
 cout<<"Time Period of varying length pendulum"<<endl;
 cout<<"==========================================="<<endl;
 
 for(length=10;length<=100;length+=10)
 {
  ratio=length/G;
  root=sqrt(ratio);
  timePeriod=2*PI*root;
  cout<<"The Time Period of pendulum with length = "<<length<<" is "<<timePeriod<<endl;
 }
 cout<<"-------------------------------------------------"<<endl;
 cout<<"\nThe Program ends \n"<<endl;
 
 return 0;
}
  
