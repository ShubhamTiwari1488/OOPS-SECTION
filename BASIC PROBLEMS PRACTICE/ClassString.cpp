
/*____________A PROGRAM USING CLASS STRING___________________*/

#include<iostream>       //Declaration of cin,cout and etc.
#include<string>         // Declaration of class String

using namespace std;

int main()
{
 //Define four strings:
 
 string prompt="What is your name:",name,line(40,'_'),total="Hello ";   //Or prompt("What is your name:");
 
 cout<<prompt;
 getline(cin,name);     //Input a name in one line
 
 total=total+name;
 
 cout<<line<<endl;
 cout<<total<<endl;
 cout<<"Your name is "<<name.length()<<" character long"<<endl;
 cout<<line<<endl;
 
 return 0;
}
 

