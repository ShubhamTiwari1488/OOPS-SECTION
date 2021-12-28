
//CONSTRUCTOR WITH DEFAULT ARGUMENTS

#include<iostream>
using namespace std;

class Student
{
 private:
  int roll_no;
  int marks;
  
 public:
  Student()
  {
   roll_no=0;
   marks=0;
  }
  
  Student(int r,int m=0)
  { 
   roll_no=r;
   marks=m;
  }
  
  void show_data()
  {
   cout<<"\nRoll no = "<<roll_no;
   cout<<"\tMarks = "<<marks<<endl;
  }
};

int main()
{
 Student S1;
 
 S1.show_data();	//Default Constructor called
 
 Student S2(3);
 S2.show_data();
 
 Student S3(05,98);
 S3.show_data();
 
 return 0;
}
 
