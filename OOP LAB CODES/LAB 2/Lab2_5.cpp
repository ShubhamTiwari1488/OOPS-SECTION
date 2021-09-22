

//WAP TO CHECK NO IS ARMSTRONG OR NOT OF 3 DIGITS NO IN C++

#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

int main()
{
 int num,org_n,temp,rem;
 
 cout<<"\nEnter the number\n";
 cin>>num;
 
 if(num/1000)
 {
  cout<<"\nEnter a 3 digit number\n";
  exit(0);
 }
 
 org_n=num;
 temp=0;
 
 while(num>0)
 {
  rem=num%10;
  
  temp+=pow(rem,3);
  
  num=num/10;
 }
   
 if(org_n==temp)
   cout<<"\nThe number is an armstrong number\n";
   
 else
   cout<<"\nIt is not an armstrong number\n";
   
 return 0;
}
       
