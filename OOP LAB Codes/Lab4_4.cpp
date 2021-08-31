
//WAP TO ENTER ROLL,NAMEAND ARRAY OF 3 MARKS OF 5 STUDENTS .AND  DISPLAY THEIR ROLL,NAME,3MARKS AND ALONG WITH AVG MARKS

#include<iostream>
using namespace std;

class stud
{
 
 int roll;
 char name[50];
 int marks[3];
 float avg;
 
 public:
 
   void Input()
   {
    cout<<"\nEnter the roll number\n";
    cin>>roll;
    cout<<"Enter the name";
    cin>>name;
    
    for(int i=0;i<3;i++)
    {
     cout<<"\nEnter mark"<<i+1;
     cin>>marks[i];
    } 
   }
   
   void show()
   {
    cout<<"\nPrinting the details of the student\n";
    cout<<"\nThe name of the student is : "<<name<<endl;
    cout<<"Roll no of the student is : "<<roll<<endl;
    avg=0;
    
    for(int i=0;i<3;i++){
      cout<<"Marks "<<i+1<<" is "<<marks[i]<<" ";
      avg+=marks[i];
      
   }
   
   avg=avg/3;
   
   cout<<"\nThe Average of the marks is : "<<avg<<endl;
  } 
};       
 
int main()
{
 stud s[3];
 
 for(int i=0;i<3;i++)
   s[i].Input();
   
 for(int i=0;i<3;i++)
   s[i].show();
   
 return 0;
}
     
 
