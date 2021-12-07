
//STRING LENGTH WITHOUT USING STRING LIBRARY

#include<iostream>
using namespace std;

int main()
{
 char *str="Welcome to C++";
 
 int len=0;
 
 putchar('\n');
 
 while(*str!='\0')
 {
  len++;
  cout<<"Character display "<<*str<<endl;
  
  str++;
 } 
 
 cout<<"\nThe length of the string is "<<len<<endl;
 
 return 0;
}
 
