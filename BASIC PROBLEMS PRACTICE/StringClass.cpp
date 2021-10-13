

//SAMPLE PROGRAM USING CLASS STRING.

#include<iostream>
using namespace std;

int main()
{
 
 //Defining four strings :
 
 string prompt("What is your name : "), name, line(40,'_'),str="Hello ";
 
 cout<<prompt;
 
 getline(cin,name);
 
 str=str+name;
 
 cout<<line<<endl;
 
 cout<<str<<endl;
 
 cout<<"Your name is "<<name.length()<<" character long. "<<endl;
 
 cout<<line<<endl;
 
 return 0;
}
 
