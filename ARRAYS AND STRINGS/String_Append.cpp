
//WAP TO APPEND A STRING INTO ANOTHER STRING

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
 char source[100],dest[100];
 
 int i=0,j=0;
 
 cout<<"\nEnter the source string ";
 
 cin.getline(source,100);
 
 cout<<"\nEnter the destination string ";
 
 cin.getline(dest,100);
 
 i=strlen(dest);
 
 while(source[j]!='\0')
 {
  dest[i]=source[j];
  
  i++;
  j++;
 }
 
 dest[i]='\0';
 
 cout<<"\nAfter appending the destination string is ";
 
 puts(dest);
 
 return 0;
}
  
