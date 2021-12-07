
//WAP TO INSERT A STRING IN THE MAIN TEXT

#include<iostream>
using namespace std;

int main()
{
 char main[100],str[200],ins[100];
 
 int i=0,j=0,k=0,pos;
 
 cout<<"\nEnter the string ";
 cin.getline(main,100);
 
 cout<<"\nEnter the substring ";
 cin.getline(ins,100);
 
 cout<<"\nEnter the position from where to insert the substring ";
 cin>>pos;
 
 while(main[i]!='\0' && i<pos)
 {
  str[j]=main[i];
  
  i++;
  j++;
 }
 
 while(ins[k]!='\0')
 {
  str[j]=ins[k];
  
  j++;
  k++;
 }
 
 while(main[i]!='\0')
 {
  str[j]=main[i];
  
  i++;
  j++;
 }
 
 str[j]='\0';
 
 cout<<"\nAfter inserting the string in the main text we get : "<<str<<endl;
 
 return 0;
}
   
  
