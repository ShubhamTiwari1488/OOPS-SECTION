
/*___________________A PROGRAM WITH SEVERAL FUNCTION_________________________*/

#include<iostream>
using namespace std;

void line(),message();

int main()
{
 cout<<"Hello the program starts in main()."<<endl;
 
 line();
 message();
 line();
 
 cout<<"At the end of main()."<<endl;
 
 return 0;
}

void line()
{
 cout<<"____________________________________________"<<endl;
}

void message()
{
 cout<<"In function message()."<<endl;
}
   
