
//FUNCTIONS WITH VARIABLE NUMBER OF ARGUMENTS

#include<iostream>
using namespace std;

#include<cstdarg>

float avg(int argc,...)
{
 va_list args;
 
 int i,sum=0;
 
 va_start(args,argc);
 
 for(i=0;i<argc;i++)
 {
  sum+=va_arg(args,int);     //Adds next value in args to sum
 }
 
 va_end(args);
 
 return ((float)sum/argc);
}


int main()
{
 float result;
 
 result=avg(7,8,9,10,11,12,13,14,15,16,17,18,19,20);
 
 cout.precision(2);
 
 cout<<"\nAverage = "<<result<<endl;
 
 return 0;
}

   
