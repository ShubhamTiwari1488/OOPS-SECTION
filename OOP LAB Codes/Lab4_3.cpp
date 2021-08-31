

#include<iostream>
using namespace std;

class Employee
{
 int eno;
 char ename[50];
 float esal;
 
 public:
   void Input()
   {
    cout<<"\nEnter eno ";
    cin>>eno;
    
    cout<<"Enter name ";
    cin>>ename;
    
    cout<<"Enter salary ";
    cin>>esal;
   }
   
   float Gross()
   {
    float TA,HAR;
    float gross;
    
    TA=0.07*esal;
    HAR=0.09*esal;
    
    gross=esal+TA+HAR;
    
    return gross;
   }  
   
   void Show()
   {
    cout<<"\nDisplaying the details of the employee "<<endl;
    cout<<"\nENO is = "<<eno<<endl;
    cout<<"Name = "<<ename<<endl;
    cout<<"Basic Salary is = "<<esal<<endl;
    cout<<"Gross Salary is = "<<Gross()<<endl;
   }
};

int main()
{
 Employee e[3];
 
 for(int i=0;i<3;i++)
   e[i].Input();
   
 for(int i=0;i<3;i++)
   e[i].Show();
   
 return 0;
}
         
