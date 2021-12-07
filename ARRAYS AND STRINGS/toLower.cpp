//CONVERTING ALL THE LETTERS TO LOWER CASE

#include<iostream>
using namespace std;

int main()
{
 char str[100],lower_str[100];
 
 int i=0;
 
 cout<<"\nEnter the string ";
 
 cin.getline(str,100);
 
 while(str[i]!='\0')
 {
  if(str[i]>='A' && str[i]<='Z')
   lower_str[i]=str[i]+32;
   
  else
   lower_str[i]=str[i];
   
  i++;
 }
 
 cout<<"\nThe string in the lower case is "<<lower_str<<endl;
 
 return 0;
}
  
