
//WAP TO EXTRACT THE SUBSTRING FROM A GIVEN STRING.

#include<iostream>
using namespace std;

int main()
{
 char str[100],substring[100];
 
 int i,j,m,n;
 
 cout<<"\nEnter the string ";
 cin.getline(str,100);
 
 cout<<"\nEnter the starting position of the string ";
 cin>>m;
 
 cout<<"\nEnter the length of the string ";
 cin>>n;
 
 i=m-1;
 j=0;
 
 while(str[i]!='\0' && n>=0)
 {
  substring[j]=str[i];
  
  i++;
  j++;
  n--;
 }
 
 substring[j]='\0';
 
 cout<<"\nThe Substring of the String is ";
 
 puts(substring);
 
 return 0;
}
 
  
