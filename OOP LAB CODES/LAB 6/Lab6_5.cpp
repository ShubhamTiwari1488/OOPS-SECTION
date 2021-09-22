

#include<iostream>
#include<cstring>
using namespace std;

class Salary
{
 int eno;
 char ename[50];
 float esal;
 float hra;
 float ta;
 float gross;
 
 public:
   
   Salary(char name[50],int no,float salary)
   {
    strcpy(ename,name);
    eno=no;
    esal=salary;
    ta=0.15*esal;
    hra=0.17*esal;
    
    gross=(ta+hra+esal);
   }
   
   void display()
   {
    cout<<"\nName = "<<ename<<endl;
    cout<<"\nENO = "<<eno<<endl;
    cout<<"\nGross salary = "<<gross<<endl;
   }
};

int main()
{
 char name[50]="Shubham Tiwari";
 Salary s(name,1488,50000);
 
 s.display();
 
 return 0;
}
     
