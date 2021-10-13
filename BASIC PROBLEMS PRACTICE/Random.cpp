
// Generating random numbers 

#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

int main()
{
 string message = "\nLearn from your mistakes!";
 
 cout<<message<<endl;
 
 int len=message.length();
 
 cout<<"Length of the string is "<<len<<endl;
 
 int b;
 
 srand(12);
 
 b=rand();
 
 cout<<"\nRandom number : "<<b<<endl;
 
 return 0;
}
 
