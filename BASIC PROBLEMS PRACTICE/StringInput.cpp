

//TAKING STRING INPUT IN C++

#include<iostream>
using namespace std;

int main()
{
 char ch,garbage;
 char full_name[100];
 char first_name[50];
 
 cout<<"\nEnter a single character ";
 cin.get(ch);
 
 cout<<"\nEnter your first name"<<endl;
 cin>>first_name;
 
 cout<<"\nEnter your full name "<<endl;
 garbage=cin.get();
 //cin>>garbage;            I don't know why but on writing this statement it takes first character rather than '\n'
 cin.getline(full_name,100);
 
 cout<<"\nThe character you have entered is "<<ch<<endl;
 cout<<"\nThe first name you have entered is "<<first_name<<endl;
 cout<<"\nThe full name you have entered is "<<full_name;
// cout<<"\nThe garbage value is : "<<garbage;
 return 0;
}

 
