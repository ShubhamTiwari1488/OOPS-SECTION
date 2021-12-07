
//WAP TO CONVERT CHARACTERS OF A STRING IN UPPER CASE

#include<iostream>
using namespace std;

int main()
{ 
 char str[100],upper_str[100];
 
 int i=0;
 
 cout<<"\nEnter the string ";
 
 cin.getline(str,100);
 
 while(str[i]!='\0')
 {
  if(str[i]>='a' && str[i]<='z')
   upper_str[i]=str[i]-32;
   
  else
   upper_str[i]=str[i];
   
  i++;
 }
 
 upper_str[i]='\0';
 
 cout<<"\nThe string converted into upper case is : ";
 
 puts(upper_str);
 
 return 0;
}
  
