
//WAP TO COMPARE STRINGS

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
 char str1[100],str2[100];
 
 int i=0,j=0,len1,len2,flag;
 
 cout<<"\nEnter the first string ";
 cin.getline(str1,100);
 
 cout<<"\nEnter the second string ";
 cin.getline(str2,100);
 
 len1=strlen(str1);
 len2=strlen(str2);
 
 while(i<len1 && j<len2)
 {
  if(str1[i]>str2[i])
   flag=1;
   
  else if(str1[i]<str2[i])
   flag=2;
   
  else
   flag=0;
   
  i++;
  j++; 
 }
 
 if(flag==0)
 {
  if(len1>len2)
   flag=1;
   
  else if(len1<len2)
   flag=2;
   
  else 
   flag=0;
 }
 
 if(flag==0)
  cout<<"\nBoth the strings are equal "<<endl;
  
 else if(flag==1)
  cout<<"\nString 1 is greater than String 2"<<endl;
  
 else
  cout<<"\nString 2 is greater than String 1"<<endl;
  
 return 0;
}
 
