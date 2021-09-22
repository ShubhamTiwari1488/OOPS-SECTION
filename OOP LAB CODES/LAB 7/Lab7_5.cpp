
#include<iostream>
using namespace std;

class Student
{
 public:
  
  int roll;
  char name[100];
  float marks[3];
  
  void getdata()
  {
   cout<<"\nEnter name ";
   cin.getline(name,100);
   
   cout<<"\nEnter roll ";
   cin>>roll;
   
   cout<<"\nEnter three marks "<<endl;
   
   for(int i=0;i<3;i++)
   {
    cin>>marks[i];
   }
   
  }
};

class Result : public Student
{
 public:
  
  void grade()
  {
   cout<<"\nRoll no is : "<<roll;
   cout<<"\nName is : "<<name<<endl;
   cout<<"Displaying the grades :::"<<endl;
   
   for(int i=0;i<3;i++)
   {
    if(marks[i]>=90)
       cout<<"Marks is "<<marks[i]<<" and grade is O "<<endl;
       
    else if(marks[i]>=80 && marks[i]<90)
       cout<<"Marks is "<<marks[i]<<" and grade is E "<<endl;
       
    else
      cout<<"Marks is "<<marks[i]<<" and grade is A "<<endl;
      
   }
  } 
};

int main()
{
 Result r;
 
 r.getdata();
 r.grade();
 
 return 0;
}
              
        
