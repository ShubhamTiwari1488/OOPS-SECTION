
//DEMONSTRATING argc and argv 

#include<iostream>
using namespace std;

int main(int argc,char *argv[])
{
 
 cout<<"\nThe number of arguments are : "<<argc<<endl;
 
 for(int i=0;i<argc;i++)
 {
  cout<<"Argument "<<i+1<<" is "<<argv[i];
  
  cout<<endl;
  
 }
 
 return 0;
}
  
